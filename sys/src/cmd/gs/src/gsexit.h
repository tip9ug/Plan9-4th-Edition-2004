/* Copyright (C) 1994, 2001 Aladdin Enterprises.  All rights reserved.
  
  This file is part of AFPL Ghostscript.
  
  AFPL Ghostscript is distributed with NO WARRANTY OF ANY KIND.  No author or
  distributor accepts any responsibility for the consequences of using it, or
  for whether it serves any particular purpose or works at all, unless he or
  she says so in writing.  Refer to the Aladdin Free Public License (the
  "License") for full details.
  
  Every copy of AFPL Ghostscript must include a copy of the License, normally
  in a plain ASCII text file named PUBLIC.  The License grants you the right
  to copy, modify and redistribute AFPL Ghostscript, but only under certain
  conditions described in the License.  Among other things, the License
  requires that the copyright notice and this notice be preserved on all
  copies.
*/

/*$Id: gsexit.h,v 1.4 2001/03/13 07:09:29 ghostgum Exp $ */
/* Declarations for exits */

#ifndef gsexit_INCLUDED
#  define gsexit_INCLUDED

/* These do not call exit() */
/* You still need to return to the caller.*/
void gs_exit_with_code(P2(int exit_status, int code));
void gs_exit(P1(int exit_status));
void gs_abort(P0());

#endif /* gsexit_INCLUDED */
