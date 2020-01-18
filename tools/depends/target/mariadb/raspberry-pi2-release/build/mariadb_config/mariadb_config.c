#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <mariadb_version.h>

static char *mariadb_progname;

#define INCLUDE "-I/root/kodi-rpi/raspberry-pi2-release/include/mariadb -I/root/kodi-rpi/raspberry-pi2-release/include/mariadb/mysql"
#define LIBS    "-L/root/kodi-rpi/raspberry-pi2-release/lib/mariadb/ -lmariadb "\
                "-l/root/kodi-rpi/raspberry-pi2-release/lib/libz.a -ldl -lm -l/root/kodi-rpi/raspberry-pi2-release/lib/libssl.a -l/root/kodi-rpi/raspberry-pi2-release/lib/libcrypto.a"
#define LIBS_SYS "-l/root/kodi-rpi/raspberry-pi2-release/lib/libz.a -ldl -lm -l/root/kodi-rpi/raspberry-pi2-release/lib/libssl.a -l/root/kodi-rpi/raspberry-pi2-release/lib/libcrypto.a"
#define CFLAGS  INCLUDE
#define VERSION "10.2.9"
#define CC_VERSION "3.0.3"
#define PLUGIN_DIR "/root/kodi-rpi/raspberry-pi2-release/lib/mariadb/plugin"
#define SOCKET  "/tmp/mysql.sock"
#define PORT "3306"
#define TLS_LIBRARY_VERSION "OpenSSL 1.1.0h"

static struct option long_options[]=
{
  {"cflags", no_argument, 0, 'a'},
  {"help", no_argument, 0, 'b'},
  {"include", no_argument, 0, 'c'},
  {"libs", no_argument, 0, 'd'},
  {"libs_r", no_argument, 0, 'e'},
  {"libs_sys", no_argument, 0, 'l'},
  {"version", no_argument, 0, 'f'},
  {"cc_version", no_argument, 0, 'g'},
  {"socket", no_argument, 0, 'h'},
  {"port", no_argument, 0, 'i'},
  {"plugindir", no_argument, 0, 'j'},
  {"tlsinfo", no_argument, 0, 'k'},
  {NULL, 0, 0, 0}
};

static const char *values[]=
{
  CFLAGS,
  NULL,
  INCLUDE,
  LIBS,
  LIBS,
  LIBS_SYS,
  VERSION,
  CC_VERSION,
  SOCKET,
  PORT,
  PLUGIN_DIR,
  TLS_LIBRARY_VERSION
};

void usage(void)
{
  int i=0;
  puts("Copyright 2011-2017 MariaDB Corporation AB");
  puts("Get compiler flags for using the MariaDB Connector/C.");
  printf("Usage: %s [OPTIONS]\n", mariadb_progname);
  while (long_options[i].name)
  {
    if (values[i])
      printf("  --%-12s  [%s]\n", long_options[i].name, values[i]);
    i++;
  }
}


int main(int argc, char **argv)
{
  int c;
  mariadb_progname= argv[0];

  if (argc <= 1)
  {
    usage();
    exit(0);
  }

  while(1)
  {
    int option_index= 0;
    c= getopt_long(argc, argv, "abcdefghij", long_options, &option_index);

    switch(c) {
    case 'a':
      puts(CFLAGS);
      break;
    case 'b':
      usage();
      break;
    case 'c':
      puts(INCLUDE);
      break;
    case 'd':
    case 'e':
      puts(LIBS);
      break;
    case 'f':
      puts(VERSION);
      break;
    case 'g':
      puts(CC_VERSION);
      break;
    case 'h':
      puts(SOCKET);
      break;
    case 'i':
      puts(PORT);
      break;
    case 'j':
      puts(PLUGIN_DIR);
      break;
    case 'k':
      puts(TLS_LIBRARY_VERSION);
      break;
    case 'l':
      puts(LIBS_SYS);
      break;
    default:
      exit((c != -1));
    }
  }

  exit(0);
}

