/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "mlfs_rpc.h"

bool_t
xdr_mlfs_rpc_write_io (XDR *xdrs, mlfs_rpc_write_io *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->n))
		 return FALSE;
	 if (!xdr_string (xdrs, &objp->data, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->type))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_mlfs_write_io (XDR *xdrs, mlfs_write_io *objp)
{
	register int32_t *buf;

	 if (!xdr_mlfs_rpc_write_io (xdrs, objp))
		 return FALSE;
	return TRUE;
}
