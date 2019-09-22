/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_CellAccessRelatedInfo_EUTRA_EPC_H_
#define	_CellAccessRelatedInfo_EUTRA_EPC_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/BIT_STRING.h>
#include <skeletons/constr_SEQUENCE.h>

#include "PLMN-IdentityList-EUTRA-EPC.h"

#ifdef __cplusplus
extern "C" {
#endif

/* CellAccessRelatedInfo-EUTRA-EPC */
typedef struct CellAccessRelatedInfo_EUTRA_EPC {
	PLMN_IdentityList_EUTRA_EPC_t	 plmn_IdentityList_eutra_epc;
	BIT_STRING_t	 trackingAreaCode_eutra_epc;
	BIT_STRING_t	 cellIdentity_eutra_epc;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellAccessRelatedInfo_EUTRA_EPC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellAccessRelatedInfo_EUTRA_EPC;
extern asn_SEQUENCE_specifics_t asn_SPC_CellAccessRelatedInfo_EUTRA_EPC_specs_1;
extern asn_TYPE_member_t asn_MBR_CellAccessRelatedInfo_EUTRA_EPC_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _CellAccessRelatedInfo_EUTRA_EPC_H_ */
#include <skeletons/asn_internal.h>