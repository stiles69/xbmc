/* Autogenerated by script/mkversion.sh */
#define SAMBA_VERSION_MAJOR 4
#define SAMBA_VERSION_MINOR 1
#define SAMBA_VERSION_RELEASE 23
#define SAMBA_VERSION_OFFICIAL_STRING "4.1.23"
#ifdef SAMBA_VERSION_VENDOR_FUNCTION
#  define SAMBA_VERSION_STRING SAMBA_VERSION_VENDOR_FUNCTION
#else /* SAMBA_VERSION_VENDOR_FUNCTION */
#  ifdef SAMBA_VERSION_VENDOR_SUFFIX
#    ifdef SAMBA_VERSION_VENDOR_PATCH
#      define SAMBA_VERSION_STRING SAMBA_VERSION_OFFICIAL_STRING "-" SAMBA_VERSION_VENDOR_SUFFIX "-" SAMBA_VERSION_VENDOR_PATCH_STRING
#    else /* SAMBA_VERSION_VENDOR_PATCH */
#      define SAMBA_VERSION_STRING SAMBA_VERSION_OFFICIAL_STRING "-" SAMBA_VERSION_VENDOR_SUFFIX
#    endif /* SAMBA_VERSION_VENDOR_SUFFIX */
#  else /* SAMBA_VERSION_VENDOR_FUNCTION */
#    define SAMBA_VERSION_STRING SAMBA_VERSION_OFFICIAL_STRING
#  endif
#endif
