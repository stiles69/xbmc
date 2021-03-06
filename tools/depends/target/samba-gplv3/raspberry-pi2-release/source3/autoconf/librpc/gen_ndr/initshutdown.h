/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_initshutdown
#define _PIDL_HEADER_initshutdown

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/lsa.h"
#ifndef _HEADER_initshutdown
#define _HEADER_initshutdown

enum initshutdown_ReasonMajor
#ifndef USE_UINT_ENUMS
 {
	SHTDN_REASON_MAJOR_OTHER=(int)(0x00000000),
	SHTDN_REASON_MAJOR_HARDWARE=(int)(0x00010000),
	SHTDN_REASON_MAJOR_OPERATINGSYSTEM=(int)(0x00020000),
	SHTDN_REASON_MAJOR_SOFTWARE=(int)(0x00030000),
	SHTDN_REASON_MAJOR_APPLICATION=(int)(0x00040000),
	SHTDN_REASON_MAJOR_SYSTEM=(int)(0x00050000),
	SHTDN_REASON_MAJOR_POWER=(int)(0x00060000),
	SHTDN_REASON_MAJOR_LEGACY_API=(int)(0x00070000)
}
#else
 { __do_not_use_enum_initshutdown_ReasonMajor=0x7FFFFFFF}
#define SHTDN_REASON_MAJOR_OTHER ( 0x00000000 )
#define SHTDN_REASON_MAJOR_HARDWARE ( 0x00010000 )
#define SHTDN_REASON_MAJOR_OPERATINGSYSTEM ( 0x00020000 )
#define SHTDN_REASON_MAJOR_SOFTWARE ( 0x00030000 )
#define SHTDN_REASON_MAJOR_APPLICATION ( 0x00040000 )
#define SHTDN_REASON_MAJOR_SYSTEM ( 0x00050000 )
#define SHTDN_REASON_MAJOR_POWER ( 0x00060000 )
#define SHTDN_REASON_MAJOR_LEGACY_API ( 0x00070000 )
#endif
;

enum initshutdown_ReasonMinor
#ifndef USE_UINT_ENUMS
 {
	SHTDN_REASON_MINOR_OTHER=(int)(0x00000000),
	SHTDN_REASON_MINOR_MAINTENANCE=(int)(0x00000001),
	SHTDN_REASON_MINOR_INSTALLATION=(int)(0x00000002),
	SHTDN_REASON_MINOR_UPGRADE=(int)(0x00000003),
	SHTDN_REASON_MINOR_RECONFIG=(int)(0x00000004),
	SHTDN_REASON_MINOR_HUNG=(int)(0x00000005),
	SHTDN_REASON_MINOR_UNSTABLE=(int)(0x00000006),
	SHTDN_REASON_MINOR_DISK=(int)(0x00000007),
	SHTDN_REASON_MINOR_PROCESSOR=(int)(0x00000008),
	SHTDN_REASON_MINOR_NETWORKCARD=(int)(0x00000009),
	SHTDN_REASON_MINOR_POWER_SUPPLY=(int)(0x0000000a),
	SHTDN_REASON_MINOR_CORDUNPLUGGED=(int)(0x0000000b),
	SHTDN_REASON_MINOR_ENVIRONMENT=(int)(0x0000000c),
	SHTDN_REASON_MINOR_HARDWARE_DRIVER=(int)(0x0000000d),
	SHTDN_REASON_MINOR_OTHERDRIVER=(int)(0x0000000e),
	SHTDN_REASON_MINOR_BLUESCREEN=(int)(0x0000000f),
	SHTDN_REASON_MINOR_SERVICEPACK=(int)(0x00000010),
	SHTDN_REASON_MINOR_HOTFIX=(int)(0x00000011),
	SHTDN_REASON_MINOR_SECURITYFIX=(int)(0x00000012),
	SHTDN_REASON_MINOR_SECURITY=(int)(0x00000013),
	SHTDN_REASON_MINOR_NETWORK_CONNECTIVITY=(int)(0x00000014),
	SHTDN_REASON_MINOR_WMI=(int)(0x00000015),
	SHTDN_REASON_MINOR_SERVICEPACK_UNINSTALL=(int)(0x00000016),
	SHTDN_REASON_MINOR_HOTFIX_UNINSTALL=(int)(0x00000017),
	SHTDN_REASON_MINOR_SECURITYFIX_UNINSTALL=(int)(0x00000018),
	SHTDN_REASON_MINOR_MMC=(int)(0x00000019),
	SHTDN_REASON_MINOR_TERMSRV=(int)(0x00000020)
}
#else
 { __do_not_use_enum_initshutdown_ReasonMinor=0x7FFFFFFF}
#define SHTDN_REASON_MINOR_OTHER ( 0x00000000 )
#define SHTDN_REASON_MINOR_MAINTENANCE ( 0x00000001 )
#define SHTDN_REASON_MINOR_INSTALLATION ( 0x00000002 )
#define SHTDN_REASON_MINOR_UPGRADE ( 0x00000003 )
#define SHTDN_REASON_MINOR_RECONFIG ( 0x00000004 )
#define SHTDN_REASON_MINOR_HUNG ( 0x00000005 )
#define SHTDN_REASON_MINOR_UNSTABLE ( 0x00000006 )
#define SHTDN_REASON_MINOR_DISK ( 0x00000007 )
#define SHTDN_REASON_MINOR_PROCESSOR ( 0x00000008 )
#define SHTDN_REASON_MINOR_NETWORKCARD ( 0x00000009 )
#define SHTDN_REASON_MINOR_POWER_SUPPLY ( 0x0000000a )
#define SHTDN_REASON_MINOR_CORDUNPLUGGED ( 0x0000000b )
#define SHTDN_REASON_MINOR_ENVIRONMENT ( 0x0000000c )
#define SHTDN_REASON_MINOR_HARDWARE_DRIVER ( 0x0000000d )
#define SHTDN_REASON_MINOR_OTHERDRIVER ( 0x0000000e )
#define SHTDN_REASON_MINOR_BLUESCREEN ( 0x0000000f )
#define SHTDN_REASON_MINOR_SERVICEPACK ( 0x00000010 )
#define SHTDN_REASON_MINOR_HOTFIX ( 0x00000011 )
#define SHTDN_REASON_MINOR_SECURITYFIX ( 0x00000012 )
#define SHTDN_REASON_MINOR_SECURITY ( 0x00000013 )
#define SHTDN_REASON_MINOR_NETWORK_CONNECTIVITY ( 0x00000014 )
#define SHTDN_REASON_MINOR_WMI ( 0x00000015 )
#define SHTDN_REASON_MINOR_SERVICEPACK_UNINSTALL ( 0x00000016 )
#define SHTDN_REASON_MINOR_HOTFIX_UNINSTALL ( 0x00000017 )
#define SHTDN_REASON_MINOR_SECURITYFIX_UNINSTALL ( 0x00000018 )
#define SHTDN_REASON_MINOR_MMC ( 0x00000019 )
#define SHTDN_REASON_MINOR_TERMSRV ( 0x00000020 )
#endif
;

/* bitmap initshutdown_ReasonFlags */
#define SHTDN_REASON_FLAG_USER_DEFINED ( 0x40000000 )
#define SHTDN_REASON_FLAG_PLANNED ( 0x80000000 )


struct initshutdown_Init {
	struct {
		uint16_t *hostname;/* [unique] */
		struct lsa_StringLarge *message;/* [unique] */
		uint32_t timeout;
		uint8_t force_apps;
		uint8_t do_reboot;
	} in;

	struct {
		WERROR result;
	} out;

};


struct initshutdown_Abort {
	struct {
		uint16_t *server;/* [unique] */
	} in;

	struct {
		WERROR result;
	} out;

};


struct initshutdown_InitEx {
	struct {
		uint16_t *hostname;/* [unique] */
		struct lsa_StringLarge *message;/* [unique] */
		uint32_t timeout;
		uint8_t force_apps;
		uint8_t do_reboot;
		uint32_t reason;
	} in;

	struct {
		WERROR result;
	} out;

};

#endif /* _HEADER_initshutdown */
#endif /* _PIDL_HEADER_initshutdown */
