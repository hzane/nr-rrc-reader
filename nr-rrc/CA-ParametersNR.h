/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_CA_ParametersNR_H_
#define	_CA_ParametersNR_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/NativeEnumerated.h>
#include <skeletons/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CA_ParametersNR__dummy {
	CA_ParametersNR__dummy_supported	= 0
} e_CA_ParametersNR__dummy;
typedef enum CA_ParametersNR__parallelTxSRS_PUCCH_PUSCH {
	CA_ParametersNR__parallelTxSRS_PUCCH_PUSCH_supported	= 0
} e_CA_ParametersNR__parallelTxSRS_PUCCH_PUSCH;
typedef enum CA_ParametersNR__parallelTxPRACH_SRS_PUCCH_PUSCH {
	CA_ParametersNR__parallelTxPRACH_SRS_PUCCH_PUSCH_supported	= 0
} e_CA_ParametersNR__parallelTxPRACH_SRS_PUCCH_PUSCH;
typedef enum CA_ParametersNR__simultaneousRxTxInterBandCA {
	CA_ParametersNR__simultaneousRxTxInterBandCA_supported	= 0
} e_CA_ParametersNR__simultaneousRxTxInterBandCA;
typedef enum CA_ParametersNR__simultaneousRxTxSUL {
	CA_ParametersNR__simultaneousRxTxSUL_supported	= 0
} e_CA_ParametersNR__simultaneousRxTxSUL;
typedef enum CA_ParametersNR__diffNumerologyAcrossPUCCH_Group {
	CA_ParametersNR__diffNumerologyAcrossPUCCH_Group_supported	= 0
} e_CA_ParametersNR__diffNumerologyAcrossPUCCH_Group;
typedef enum CA_ParametersNR__diffNumerologyWithinPUCCH_GroupSmallerSCS {
	CA_ParametersNR__diffNumerologyWithinPUCCH_GroupSmallerSCS_supported	= 0
} e_CA_ParametersNR__diffNumerologyWithinPUCCH_GroupSmallerSCS;
typedef enum CA_ParametersNR__supportedNumberTAG {
	CA_ParametersNR__supportedNumberTAG_n2	= 0,
	CA_ParametersNR__supportedNumberTAG_n3	= 1,
	CA_ParametersNR__supportedNumberTAG_n4	= 2
} e_CA_ParametersNR__supportedNumberTAG;

/* CA-ParametersNR */
typedef struct CA_ParametersNR {
	long	*dummy;	/* OPTIONAL */
	long	*parallelTxSRS_PUCCH_PUSCH;	/* OPTIONAL */
	long	*parallelTxPRACH_SRS_PUCCH_PUSCH;	/* OPTIONAL */
	long	*simultaneousRxTxInterBandCA;	/* OPTIONAL */
	long	*simultaneousRxTxSUL;	/* OPTIONAL */
	long	*diffNumerologyAcrossPUCCH_Group;	/* OPTIONAL */
	long	*diffNumerologyWithinPUCCH_GroupSmallerSCS;	/* OPTIONAL */
	long	*supportedNumberTAG;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CA_ParametersNR_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dummy_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_parallelTxSRS_PUCCH_PUSCH_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_parallelTxPRACH_SRS_PUCCH_PUSCH_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_simultaneousRxTxInterBandCA_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_simultaneousRxTxSUL_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_diffNumerologyAcrossPUCCH_Group_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_diffNumerologyWithinPUCCH_GroupSmallerSCS_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportedNumberTAG_16;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CA_ParametersNR;
extern asn_SEQUENCE_specifics_t asn_SPC_CA_ParametersNR_specs_1;
extern asn_TYPE_member_t asn_MBR_CA_ParametersNR_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _CA_ParametersNR_H_ */
#include <skeletons/asn_internal.h>