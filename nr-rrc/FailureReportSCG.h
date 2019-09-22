/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_FailureReportSCG_H_
#define	_FailureReportSCG_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FailureReportSCG__failureType {
	FailureReportSCG__failureType_t310_Expiry	= 0,
	FailureReportSCG__failureType_randomAccessProblem	= 1,
	FailureReportSCG__failureType_rlc_MaxNumRetx	= 2,
	FailureReportSCG__failureType_synchReconfigFailureSCG	= 3,
	FailureReportSCG__failureType_scg_ReconfigFailure	= 4,
	FailureReportSCG__failureType_srb3_IntegrityFailure	= 5,
	FailureReportSCG__failureType_spare2	= 6,
	FailureReportSCG__failureType_spare1	= 7
} e_FailureReportSCG__failureType;

/* Forward declarations */
struct MeasResultFreqList;

/* FailureReportSCG */
typedef struct FailureReportSCG {
	long	 failureType;
	struct MeasResultFreqList	*measResultFreqList;	/* OPTIONAL */
	OCTET_STRING_t	*measResultSCG_Failure;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FailureReportSCG_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_failureType_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_FailureReportSCG;
extern asn_SEQUENCE_specifics_t asn_SPC_FailureReportSCG_specs_1;
extern asn_TYPE_member_t asn_MBR_FailureReportSCG_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultFreqList.h"

#endif	/* _FailureReportSCG_H_ */
#include "asn_internal.h"
