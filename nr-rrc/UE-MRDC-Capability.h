/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_UE_MRDC_Capability_H_
#define	_UE_MRDC_Capability_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/OCTET_STRING.h>
#include <skeletons/asn_SEQUENCE_OF.h>
#include <skeletons/constr_SEQUENCE.h>
#include <skeletons/constr_SEQUENCE_OF.h>

#include "RF-ParametersMRDC.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasAndMobParametersMRDC;
struct Phy_ParametersMRDC;
struct GeneralParametersMRDC_XDD_Diff;
struct UE_MRDC_CapabilityAddXDD_Mode;
struct UE_MRDC_CapabilityAddFRX_Mode;
struct PDCP_ParametersMRDC;
struct UE_MRDC_Capability_v1560;
struct FeatureSetCombination;

/* UE-MRDC-Capability */
typedef struct UE_MRDC_Capability {
	struct MeasAndMobParametersMRDC	*measAndMobParametersMRDC;	/* OPTIONAL */
	struct Phy_ParametersMRDC	*phy_ParametersMRDC_v1530;	/* OPTIONAL */
	RF_ParametersMRDC_t	 rf_ParametersMRDC;
	struct GeneralParametersMRDC_XDD_Diff	*generalParametersMRDC;	/* OPTIONAL */
	struct UE_MRDC_CapabilityAddXDD_Mode	*fdd_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct UE_MRDC_CapabilityAddXDD_Mode	*tdd_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct UE_MRDC_CapabilityAddFRX_Mode	*fr1_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct UE_MRDC_CapabilityAddFRX_Mode	*fr2_Add_UE_MRDC_Capabilities;	/* OPTIONAL */
	struct UE_MRDC_Capability__featureSetCombinations {
		A_SEQUENCE_OF(struct FeatureSetCombination) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *featureSetCombinations;
	struct PDCP_ParametersMRDC	*pdcp_ParametersMRDC_v1530;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct UE_MRDC_Capability_v1560	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_MRDC_Capability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_MRDC_Capability;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasAndMobParametersMRDC.h"
#include "Phy-ParametersMRDC.h"
#include "GeneralParametersMRDC-XDD-Diff.h"
#include "UE-MRDC-CapabilityAddXDD-Mode.h"
#include "UE-MRDC-CapabilityAddFRX-Mode.h"
#include "PDCP-ParametersMRDC.h"
#include "UE-MRDC-Capability-v1560.h"
#include "FeatureSetCombination.h"

#endif	/* _UE_MRDC_Capability_H_ */
#include <skeletons/asn_internal.h>