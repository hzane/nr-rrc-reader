/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_CG_Config_IEs_H_
#define	_CG_Config_IEs_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ConfigRestrictModReqSCG;
struct DRX_Info;
struct MeasConfigSN;
struct BandCombinationInfoSN;
struct FR_InfoList;
struct CandidateServingFreqListNR;
struct CG_Config_v1540_IEs;

/* CG-Config-IEs */
typedef struct CG_Config_IEs {
	OCTET_STRING_t	*scg_CellGroupConfig;	/* OPTIONAL */
	OCTET_STRING_t	*scg_RB_Config;	/* OPTIONAL */
	struct ConfigRestrictModReqSCG	*configRestrictModReq;	/* OPTIONAL */
	struct DRX_Info	*drx_InfoSCG;	/* OPTIONAL */
	OCTET_STRING_t	*candidateCellInfoListSN;	/* OPTIONAL */
	struct MeasConfigSN	*measConfigSN;	/* OPTIONAL */
	struct BandCombinationInfoSN	*selectedBandCombination;	/* OPTIONAL */
	struct FR_InfoList	*fr_InfoListSCG;	/* OPTIONAL */
	struct CandidateServingFreqListNR	*candidateServingFreqListNR;	/* OPTIONAL */
	struct CG_Config_v1540_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CG_Config_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CG_Config_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_CG_Config_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_CG_Config_IEs_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ConfigRestrictModReqSCG.h"
#include "DRX-Info.h"
#include "MeasConfigSN.h"
#include "BandCombinationInfoSN.h"
#include "FR-InfoList.h"
#include "CandidateServingFreqListNR.h"
#include "CG-Config-v1540-IEs.h"

#endif	/* _CG_Config_IEs_H_ */
#include "asn_internal.h"
