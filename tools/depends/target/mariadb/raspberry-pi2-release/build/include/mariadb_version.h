/* Copyright Abandoned 1996, 1999, 2001 MySQL AB
   This file is public domain and comes with NO WARRANTY of any kind */

/* Version numbers for protocol & mysqld */

#ifndef _mariadb_version_h_
#define _mariadb_version_h_

#ifdef _CUSTOMCONFIG_
#include <custom_conf.h>
#else
#define PROTOCOL_VERSION		10
#define MARIADB_CLIENT_VERSION_STR	"10.2.9"
#define MARIADB_BASE_VERSION		"mariadb-10.2"
#define MARIADB_VERSION_ID		100209
#define MYSQL_VERSION_ID		100209
#define MARIADB_PORT	        	3306
#define MARIADB_UNIX_ADDR               "/tmp/mysql.sock"
#define MYSQL_CONFIG_NAME		"my"

#define MARIADB_PACKAGE_VERSION "3.0.3"
#define MARIADB_PACKAGE_VERSION_ID 30003
#define MARIADB_SYSTEM_TYPE "Linux"
#define MARIADB_MACHINE_TYPE ""
#define MARIADB_PLUGINDIR "lib/mariadb/plugin"

/* mysqld compile time options */
#ifndef MYSQL_CHARSET
#define MYSQL_CHARSET			""
#endif
#endif

/* Source information */
#define CC_SOURCE_REVISION "01149380a21391c3f241d77dc5020c27d5c8e281"

#endif /* _mariadb_version_h_ */
