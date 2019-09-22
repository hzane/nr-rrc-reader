/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_PUCCH_format3_H_
#define	_PUCCH_format3_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PUCCH-format3 */
typedef struct PUCCH_format3 {
	long	 nrofPRBs;
	long	 nrofSymbols;
	long	 startingSymbolIndex;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_format3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_format3;
extern asn_SEQUENCE_specifics_t asn_SPC_PUCCH_format3_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_format3_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_format3_H_ */
#include "asn_internal.h"
