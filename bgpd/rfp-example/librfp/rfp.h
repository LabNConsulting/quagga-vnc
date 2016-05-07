/* 
 *
 * Copyright 2015-2016, LabN Consulting, L.L.C.
 *
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */

/* Sample header file */
#ifndef _RFP_H
#define _RFP_H

#include "rfapi.h"
extern int bgp_rfp_cfg_write (void *vty, void *bgp);
/* TO BE REMOVED */
void rfp_clear_vnc_nve_all (void);

#endif /* _RFP_H */
