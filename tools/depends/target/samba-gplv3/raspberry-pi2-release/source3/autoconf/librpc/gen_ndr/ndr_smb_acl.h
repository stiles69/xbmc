/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "autoconf/librpc/gen_ndr/smb_acl.h"

#ifndef _HEADER_NDR_smb_acl
#define _HEADER_NDR_smb_acl

#define NDR_SMB_ACL_CALL_COUNT (0)
void ndr_print_smb_acl_tag_t(struct ndr_print *ndr, const char *name, enum smb_acl_tag_t r);
void ndr_print_smb_acl_user(struct ndr_print *ndr, const char *name, const struct smb_acl_user *r);
void ndr_print_smb_acl_group(struct ndr_print *ndr, const char *name, const struct smb_acl_group *r);
void ndr_print_smb_acl_entry_info(struct ndr_print *ndr, const char *name, const union smb_acl_entry_info *r);
void ndr_print_smb_acl_entry(struct ndr_print *ndr, const char *name, const struct smb_acl_entry *r);
enum ndr_err_code ndr_push_smb_acl_t(struct ndr_push *ndr, int ndr_flags, const struct smb_acl_t *r);
enum ndr_err_code ndr_pull_smb_acl_t(struct ndr_pull *ndr, int ndr_flags, struct smb_acl_t *r);
void ndr_print_smb_acl_t(struct ndr_print *ndr, const char *name, const struct smb_acl_t *r);
enum ndr_err_code ndr_push_smb_acl_wrapper(struct ndr_push *ndr, int ndr_flags, const struct smb_acl_wrapper *r);
enum ndr_err_code ndr_pull_smb_acl_wrapper(struct ndr_pull *ndr, int ndr_flags, struct smb_acl_wrapper *r);
void ndr_print_smb_acl_wrapper(struct ndr_print *ndr, const char *name, const struct smb_acl_wrapper *r);
#endif /* _HEADER_NDR_smb_acl */
