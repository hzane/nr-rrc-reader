/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_DL_AM_RLC_H_
#define	_DL_AM_RLC_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SN-FieldLengthAM.h"
#include "T-Reassembly.h"
#include "T-StatusProhibit.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DL-AM-RLC */
typedef struct DL_AM_RLC {
	SN_FieldLengthAM_t	*sn_FieldLength;	/* OPTIONAL */
	T_Reassembly_t	 t_Reassembly;
	T_StatusProhibit_t	 t_StatusProhibit;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_AM_RLC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_AM_RLC;
extern asn_SEQUENCE_specifics_t asn_SPC_DL_AM_RLC_specs_1;
extern asn_TYPE_member_t asn_MBR_DL_AM_RLC_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _DL_AM_RLC_H_ */
#include "asn_internal.h"
