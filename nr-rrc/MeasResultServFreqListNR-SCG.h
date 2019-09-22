/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_MeasResultServFreqListNR_SCG_H_
#define	_MeasResultServFreqListNR_SCG_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResult2NR;

/* MeasResultServFreqListNR-SCG */
typedef struct MeasResultServFreqListNR_SCG {
	A_SEQUENCE_OF(struct MeasResult2NR) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultServFreqListNR_SCG_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultServFreqListNR_SCG;
extern asn_SET_OF_specifics_t asn_SPC_MeasResultServFreqListNR_SCG_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultServFreqListNR_SCG_1[1];
extern asn_per_constraints_t asn_PER_type_MeasResultServFreqListNR_SCG_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResult2NR.h"

#endif	/* _MeasResultServFreqListNR_SCG_H_ */
#include "asn_internal.h"
