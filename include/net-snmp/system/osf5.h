#include "generic.h"

#define osf4

/* Needed by <sys/socket.h> to give us the correct sockaddr structures */
#ifndef _SOCKADDR_LEN
#define _SOCKADDR_LEN
#endif

#undef TCP_TTL_SYMBOL
#define TCP_TTL_SYMBOL "tcp_ttl"

/* var_route.c nlist symbols */
#undef RTTABLES_SYMBOL
#define RTTABLES_SYMBOL "rtable"
#undef RTHASHSIZE_SYMBOL
#define RTHASHSIZE_SYMBOL "rhash_size"

#ifndef __GNUC__
#  undef NETSNMP_ENABLE_INLINE
#  define NETSNMP_ENABLE_INLINE 0
#endif
