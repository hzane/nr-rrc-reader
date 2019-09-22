/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_MeasResultCellSFTD_NR_H_
#define	_MeasResultCellSFTD_NR_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PhysCellId.h"
#include "NativeInteger.h"
#include "RSRP-Range.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultCellSFTD-NR */
typedef struct MeasResultCellSFTD_NR {
	PhysCellId_t	 physCellId;
	long	 sfn_OffsetResult;
	long	 frameBoundaryOffsetResult;
	RSRP_Range_t	*rsrp_Result;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultCellSFTD_NR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultCellSFTD_NR;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultCellSFTD_NR_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultCellSFTD_NR_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultCellSFTD_NR_H_ */
#include "asn_internal.h"
