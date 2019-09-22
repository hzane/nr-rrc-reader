/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_FailureInformation_IEs_H_
#define	_FailureInformation_IEs_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/OCTET_STRING.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FailureInfoRLC_Bearer;

/* FailureInformation-IEs */
typedef struct FailureInformation_IEs {
	struct FailureInfoRLC_Bearer	*failureInfoRLC_Bearer;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct FailureInformation_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FailureInformation_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FailureInformation_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_FailureInformation_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_FailureInformation_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FailureInfoRLC-Bearer.h"

#endif	/* _FailureInformation_IEs_H_ */
#include <skeletons/asn_internal.h>