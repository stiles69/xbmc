/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "autoconf/librpc/gen_ndr/mgmt.h"

#ifndef _HEADER_NDR_mgmt
#define _HEADER_NDR_mgmt

#define NDR_MGMT_UUID "afa8bd80-7d8a-11c9-bef4-08002b102989"
#define NDR_MGMT_VERSION 1.0
#define NDR_MGMT_NAME "mgmt"
#define NDR_MGMT_HELPSTRING "DCE/RPC Remote Management"
extern const struct ndr_interface_table ndr_table_mgmt;
#define NDR_MGMT_INQ_IF_IDS (0x00)

#define NDR_MGMT_INQ_STATS (0x01)

#define NDR_MGMT_IS_SERVER_LISTENING (0x02)

#define NDR_MGMT_STOP_SERVER_LISTENING (0x03)

#define NDR_MGMT_INQ_PRINC_NAME (0x04)

#define NDR_MGMT_CALL_COUNT (5)
void ndr_print_ndr_syntax_id_p(struct ndr_print *ndr, const char *name, const struct ndr_syntax_id_p *r);
void ndr_print_rpc_if_id_vector_t(struct ndr_print *ndr, const char *name, const struct rpc_if_id_vector_t *r);
void ndr_print_mgmt_statistics(struct ndr_print *ndr, const char *name, const struct mgmt_statistics *r);
void ndr_print_mgmt_inq_if_ids(struct ndr_print *ndr, const char *name, int flags, const struct mgmt_inq_if_ids *r);
void ndr_print_mgmt_inq_stats(struct ndr_print *ndr, const char *name, int flags, const struct mgmt_inq_stats *r);
void ndr_print_mgmt_is_server_listening(struct ndr_print *ndr, const char *name, int flags, const struct mgmt_is_server_listening *r);
void ndr_print_mgmt_stop_server_listening(struct ndr_print *ndr, const char *name, int flags, const struct mgmt_stop_server_listening *r);
void ndr_print_mgmt_inq_princ_name(struct ndr_print *ndr, const char *name, int flags, const struct mgmt_inq_princ_name *r);
#endif /* _HEADER_NDR_mgmt */
