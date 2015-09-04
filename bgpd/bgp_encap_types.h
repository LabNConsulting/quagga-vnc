/* 
 * Copyright 2015, LabN Consulting, L.L.C.
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

#ifndef _QUAGGA_BGP_ENCAP_TYPES_H
#define _QUAGGA_BGP_ENCAP_TYPES_H

/* from http://www.iana.org/assignments/bgp-parameters/bgp-parameters.xhtml#tunnel-types */
typedef enum {
    BGP_ENCAP_TYPE_RESERVED=0,
    BGP_ENCAP_TYPE_L2TPV3_OVER_IP=1,
    BGP_ENCAP_TYPE_GRE=2,
    BGP_ENCAP_TYPE_TRANSMIT_TUNNEL_ENDPOINT=3,
    BGP_ENCAP_TYPE_IPSEC_IN_TUNNEL_MODE=4,
    BGP_ENCAP_TYPE_IP_IN_IP_TUNNEL_WITH_IPSEC_TRANSPORT_MODE=5,
    BGP_ENCAP_TYPE_MPLS_IN_IP_TUNNEL_WITH_IPSEC_TRANSPORT_MODE=6,
    BGP_ENCAP_TYPE_IP_IN_IP=7,
    BGP_ENCAP_TYPE_VXLAN=8,
    BGP_ENCAP_TYPE_NVGRE=9,
    BGP_ENCAP_TYPE_MPLS=10,
    BGP_ENCAP_TYPE_MPLS_IN_GRE=11,
    BGP_ENCAP_TYPE_VXLAN_GPE=12,
    BGP_ENCAP_TYPE_MPLS_IN_UDP=13,
    BGP_ENCAP_TYPE_PBB
} bgp_encap_types;

struct bgp_encap_type_reserved {
};

struct bgp_encap_type_l2tpv3_over_ip {
};

struct bgp_encap_type_gre {
};

struct bgp_encap_type_transmit_tunnel_endpoint {
};

struct bgp_encap_type_ipsec_in_tunnel_mode {
};

struct bgp_encap_type_ip_in_ip_tunnel_with_ipsec_transport_mode {
};

struct bgp_encap_type_mpls_in_ip_tunnel_with_ipsec_transport_mode {
};

struct bgp_encap_type_ip_in_ip {
};

struct bgp_encap_type_vxlan {
};

struct bgp_encap_type_nvgre {
};

struct bgp_encap_type_mpls {
};

struct bgp_encap_type_mpls_in_gre {
};

struct bgp_encap_type_vxlan_gpe {
};

struct bgp_encap_type_mpls_in_udp {
};

struct bgp_encap_type_pbb {
};

#endif /* _QUAGGA_BGP_ENCAP_TYPES_H */
