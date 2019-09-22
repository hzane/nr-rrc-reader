/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_BWP_UplinkDedicated_H_
#define	_BWP_UplinkDedicated_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SetupRelease_PUCCH_Config;
struct SetupRelease_PUSCH_Config;
struct SetupRelease_ConfiguredGrantConfig;
struct SetupRelease_SRS_Config;
struct SetupRelease_BeamFailureRecoveryConfig;

/* BWP-UplinkDedicated */
typedef struct BWP_UplinkDedicated {
	struct SetupRelease_PUCCH_Config	*pucch_Config;	/* OPTIONAL */
	struct SetupRelease_PUSCH_Config	*pusch_Config;	/* OPTIONAL */
	struct SetupRelease_ConfiguredGrantConfig	*configuredGrantConfig;	/* OPTIONAL */
	struct SetupRelease_SRS_Config	*srs_Config;	/* OPTIONAL */
	struct SetupRelease_BeamFailureRecoveryConfig	*beamFailureRecoveryConfig;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BWP_UplinkDedicated_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BWP_UplinkDedicated;
extern asn_SEQUENCE_specifics_t asn_SPC_BWP_UplinkDedicated_specs_1;
extern asn_TYPE_member_t asn_MBR_BWP_UplinkDedicated_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SetupRelease.h"

#endif	/* _BWP_UplinkDedicated_H_ */
#include "asn_internal.h"
