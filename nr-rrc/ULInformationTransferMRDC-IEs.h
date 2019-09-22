/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_ULInformationTransferMRDC_IEs_H_
#define	_ULInformationTransferMRDC_IEs_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/OCTET_STRING.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ULInformationTransferMRDC-IEs */
typedef struct ULInformationTransferMRDC_IEs {
	OCTET_STRING_t	*ul_DCCH_MessageNR;	/* OPTIONAL */
	OCTET_STRING_t	*ul_DCCH_MessageEUTRA;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct ULInformationTransferMRDC_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULInformationTransferMRDC_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULInformationTransferMRDC_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_ULInformationTransferMRDC_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_ULInformationTransferMRDC_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ULInformationTransferMRDC_IEs_H_ */
#include <skeletons/asn_internal.h>