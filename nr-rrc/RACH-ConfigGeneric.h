/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_RACH_ConfigGeneric_H_
#define	_RACH_ConfigGeneric_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RACH_ConfigGeneric__msg1_FDM {
	RACH_ConfigGeneric__msg1_FDM_one	= 0,
	RACH_ConfigGeneric__msg1_FDM_two	= 1,
	RACH_ConfigGeneric__msg1_FDM_four	= 2,
	RACH_ConfigGeneric__msg1_FDM_eight	= 3
} e_RACH_ConfigGeneric__msg1_FDM;
typedef enum RACH_ConfigGeneric__preambleTransMax {
	RACH_ConfigGeneric__preambleTransMax_n3	= 0,
	RACH_ConfigGeneric__preambleTransMax_n4	= 1,
	RACH_ConfigGeneric__preambleTransMax_n5	= 2,
	RACH_ConfigGeneric__preambleTransMax_n6	= 3,
	RACH_ConfigGeneric__preambleTransMax_n7	= 4,
	RACH_ConfigGeneric__preambleTransMax_n8	= 5,
	RACH_ConfigGeneric__preambleTransMax_n10	= 6,
	RACH_ConfigGeneric__preambleTransMax_n20	= 7,
	RACH_ConfigGeneric__preambleTransMax_n50	= 8,
	RACH_ConfigGeneric__preambleTransMax_n100	= 9,
	RACH_ConfigGeneric__preambleTransMax_n200	= 10
} e_RACH_ConfigGeneric__preambleTransMax;
typedef enum RACH_ConfigGeneric__powerRampingStep {
	RACH_ConfigGeneric__powerRampingStep_dB0	= 0,
	RACH_ConfigGeneric__powerRampingStep_dB2	= 1,
	RACH_ConfigGeneric__powerRampingStep_dB4	= 2,
	RACH_ConfigGeneric__powerRampingStep_dB6	= 3
} e_RACH_ConfigGeneric__powerRampingStep;
typedef enum RACH_ConfigGeneric__ra_ResponseWindow {
	RACH_ConfigGeneric__ra_ResponseWindow_sl1	= 0,
	RACH_ConfigGeneric__ra_ResponseWindow_sl2	= 1,
	RACH_ConfigGeneric__ra_ResponseWindow_sl4	= 2,
	RACH_ConfigGeneric__ra_ResponseWindow_sl8	= 3,
	RACH_ConfigGeneric__ra_ResponseWindow_sl10	= 4,
	RACH_ConfigGeneric__ra_ResponseWindow_sl20	= 5,
	RACH_ConfigGeneric__ra_ResponseWindow_sl40	= 6,
	RACH_ConfigGeneric__ra_ResponseWindow_sl80	= 7
} e_RACH_ConfigGeneric__ra_ResponseWindow;

/* RACH-ConfigGeneric */
typedef struct RACH_ConfigGeneric {
	long	 prach_ConfigurationIndex;
	long	 msg1_FDM;
	long	 msg1_FrequencyStart;
	long	 zeroCorrelationZoneConfig;
	long	 preambleReceivedTargetPower;
	long	 preambleTransMax;
	long	 powerRampingStep;
	long	 ra_ResponseWindow;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RACH_ConfigGeneric_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_msg1_FDM_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_preambleTransMax_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_powerRampingStep_23;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ra_ResponseWindow_28;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RACH_ConfigGeneric;
extern asn_SEQUENCE_specifics_t asn_SPC_RACH_ConfigGeneric_specs_1;
extern asn_TYPE_member_t asn_MBR_RACH_ConfigGeneric_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _RACH_ConfigGeneric_H_ */
#include "asn_internal.h"
