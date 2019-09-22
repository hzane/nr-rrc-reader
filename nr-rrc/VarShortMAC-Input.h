/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_VarShortMAC_Input_H_
#define	_VarShortMAC_Input_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PhysCellId.h"
#include "CellIdentity.h"
#include "RNTI-Value.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VarShortMAC-Input */
typedef struct VarShortMAC_Input {
	PhysCellId_t	 sourcePhysCellId;
	CellIdentity_t	 targetCellIdentity;
	RNTI_Value_t	 source_c_RNTI;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VarShortMAC_Input_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarShortMAC_Input;

#ifdef __cplusplus
}
#endif

#endif	/* _VarShortMAC_Input_H_ */
#include "asn_internal.h"
