/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_preg
#define _PIDL_HEADER_preg

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/misc.h"
#ifndef _HEADER_preg
#define _HEADER_preg

struct preg_entry {
	const char *_opening_bracket;/* [noprint,value("["),charset(DOS)] */
	const char * keyname;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	const char *_sep1;/* [noprint,value(";"),charset(DOS)] */
	const char * valuename;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	const char *_sep2;/* [noprint,value(";"),charset(DOS)] */
	enum winreg_Type type;
	const char *_sep3;/* [charset(DOS),value(";"),noprint] */
	uint32_t size;
	const char *_sep4;/* [noprint,value(";"),charset(DOS)] */
	uint8_t *data;
	const char *_closing_bracket;/* [noprint,value("]"),charset(DOS)] */
}/* [public] */;

struct preg_header {
	const char *signature;/* [charset(DOS),value("PReg")] */
	uint32_t version;/* [value] */
}/* [public] */;

struct preg_file {
	struct preg_header header;
	uint32_t num_entries;
	struct preg_entry *entries;
}/* [nopush,nopull,flag(LIBNDR_FLAG_NOALIGN),public] */;


struct decode_preg_file {
	struct {
		struct preg_file file;
	} in;

};

#endif /* _HEADER_preg */
#endif /* _PIDL_HEADER_preg */
