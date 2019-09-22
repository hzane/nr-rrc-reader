/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_SCGFailureInformationEUTRA_IEs_H_
#define	_SCGFailureInformationEUTRA_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FailureReportSCG_EUTRA;

/* SCGFailureInformationEUTRA-IEs */
typedef struct SCGFailureInformationEUTRA_IEs {
	struct FailureReportSCG_EUTRA	*failureReportSCG_EUTRA;	/* OPTIONAL */
	struct SCGFailureInformationEUTRA_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCGFailureInformationEUTRA_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCGFailureInformationEUTRA_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SCGFailureInformationEUTRA_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SCGFailureInformationEUTRA_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FailureReportSCG-EUTRA.h"

#endif	/* _SCGFailureInformationEUTRA_IEs_H_ */
#include "asn_internal.h"
