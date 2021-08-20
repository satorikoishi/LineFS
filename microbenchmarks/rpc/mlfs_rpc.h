/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _MLFS_RPC_H_RPCGEN
#define _MLFS_RPC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct mlfs_rpc_write_io {
	int n;
	char *data;
	int type;
};
typedef struct mlfs_rpc_write_io mlfs_rpc_write_io;

typedef mlfs_rpc_write_io mlfs_write_io;

#define MLFS_RPC 76
#define MLFS_RPC_VER 1

#if defined(__STDC__) || defined(__cplusplus)
#define mlfs_rpc_write 1
extern  int * mlfs_rpc_write_1(mlfs_write_io *, CLIENT *);
extern  int * mlfs_rpc_write_1_svc(mlfs_write_io *, struct svc_req *);
extern int mlfs_rpc_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define mlfs_rpc_write 1
extern  int * mlfs_rpc_write_1();
extern  int * mlfs_rpc_write_1_svc();
extern int mlfs_rpc_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_mlfs_rpc_write_io (XDR *, mlfs_rpc_write_io*);
extern  bool_t xdr_mlfs_write_io (XDR *, mlfs_write_io*);

#else /* K&R C */
extern bool_t xdr_mlfs_rpc_write_io ();
extern bool_t xdr_mlfs_write_io ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_MLFS_RPC_H_RPCGEN */
