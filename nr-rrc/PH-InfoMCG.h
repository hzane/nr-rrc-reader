/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_PH_InfoMCG_H_
#define	_PH_InfoMCG_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ServCellIndex.h"
#include "PH-UplinkCarrierMCG.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PH_UplinkCarrierMCG;

/* PH-InfoMCG */
typedef struct PH_InfoMCG {
	ServCellIndex_t	 servCellIndex;
	PH_UplinkCarrierMCG_t	 ph_Uplink;
	struct PH_UplinkCarrierMCG	*ph_SupplementaryUplink;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PH_InfoMCG_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PH_InfoMCG;
extern asn_SEQUENCE_specifics_t asn_SPC_PH_InfoMCG_specs_1;
extern asn_TYPE_member_t asn_MBR_PH_InfoMCG_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PH-UplinkCarrierMCG.h"

#endif	/* _PH_InfoMCG_H_ */
#include "asn_internal.h"
