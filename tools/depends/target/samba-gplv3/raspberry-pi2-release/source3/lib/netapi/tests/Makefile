KRB5LIBS=
LDAP_LIBS=
LIBS=-lresolv -lnsl -ldl -lrt -lpthread -lnetapi -ltdb -ltalloc
DEVELOPER_CFLAGS=-DDEBUG_PASSWORD -DDEVELOPER -g -Wall -Wshadow -Wpointer-arith -Wcast-align -Wwrite-strings
CCFLAGS=-I../ -L../../../bin  -fPIC -mcpu=cortex-a7 -mfloat-abi=hard -mfpu=neon-vfpv4 -mvectorize-with-neon-quad -pipe -mabi=aapcs-linux -Wno-psabi -Wa,-mno-warn-deprecated -Wno-deprecated-declarations -isystem/root/firmware/opt/vc/include -isystem/root/firmware/opt/vc/include/interface/vcos/pthreads -isystem/root/firmware/opt/vc/include/interface/vmcs_host/linux -DNDEBUG=1 -Os -isystem /root/kodi-rpi/raspberry-pi2-release/include -D_REENTRANT -D_POSIX_PTHREAD_SEMANTICS $(FLAGS) -D_SAMBA_BUILD_=3 $(GTK_FLAGS)
CC= /root/tools/arm-bcm2708/arm-rpi-4.9.3-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc
PICFLAG=-fPIC
LDFLAGS=-pie -L/root/kodi-rpi/raspberry-pi2-release/lib -L/root/kodi-rpi/raspberry-pi2-release/lib64 -lpthread -L/root/firmware/opt/vc/lib -lEGL -lGLESv2 -lbcm_host -lvcos -lvchiq_arm -L./bin
DYNEXP=-Wl,--export-dynamic
NETAPI_LIBS=$(LIBS) $(KRB5LIBS) $(LDAP_LIBS)
CMDLINE_LIBS=$(NETAPI_LIBS) $(POPT_OBJ)

# Compile a source file.
COMPILE_CC = $(CC) -I. $(CCFLAGS) $(PICFLAG) -c $< -o $@
COMPILE = $(COMPILE_CC)

PROGS = bin/netapitest

all: $(PROGS)

MAKEDIR = || exec false; \
	  if test -d "$$dir"; then :; else \
	  echo mkdir "$$dir"; \
	  mkdir -p "$$dir" >/dev/null 2>&1 || \
	  test -d "$$dir" || \
	  mkdir "$$dir" || \
	  exec false; fi || exec false

BINARY_PREREQS = bin/.dummy

bin/.dummy:
	@if (: >> $@ || : > $@) >/dev/null 2>&1; then :; else \
	  dir=bin $(MAKEDIR); fi
	@: >> $@ || : > $@ # what a fancy emoticon!

.c.o:
	@if (: >> $@ || : > $@) >/dev/null 2>&1; then rm -f $@; else \
	 dir=`echo $@ | sed 's,/[^/]*$$,,;s,^$$,.,'` $(MAKEDIR); fi
	@echo Compiling $*.c
	@$(COMPILE) && exit 0;\
		echo "The following command failed:" 1>&2;\
		echo "$(COMPILE_CC)" 1>&2;\
		$(COMPILE_CC) >/dev/null 2>&1

CMDLINE_OBJ = common.o
NETAPIBUFFER_OBJ = netapibuffer.o
NETAPITEST_OBJ = netapitest.o netlocalgroup.o netuser.o netgroup.o netdisplay.o netshare.o netfile.o netserver.o $(CMDLINE_OBJ)

bin/netapitest: $(BINARY_PREREQS) $(NETAPITEST_OBJ)
	@echo Linking $@
	@$(CC) $(CCFLAGS) -o $@ $(NETAPITEST_OBJ) $(LDFLAGS) $(DYNEXP) $(CMDLINE_LIBS)

clean:
	-rm -f $(PROGS)
	-rm -f core */*~ *~ \
		*/*.o */*/*.o */*/*/*.o

