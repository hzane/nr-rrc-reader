/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_UplinkConfigCommonSIB_H_
#define	_UplinkConfigCommonSIB_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FrequencyInfoUL-SIB.h"
#include "BWP-UplinkCommon.h"
#include "TimeAlignmentTimer.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* UplinkConfigCommonSIB */
typedef struct UplinkConfigCommonSIB {
	FrequencyInfoUL_SIB_t	 frequencyInfoUL;
	BWP_UplinkCommon_t	 initialUplinkBWP;
	TimeAlignmentTimer_t	 timeAlignmentTimerCommon;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UplinkConfigCommonSIB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UplinkConfigCommonSIB;
extern asn_SEQUENCE_specifics_t asn_SPC_UplinkConfigCommonSIB_specs_1;
extern asn_TYPE_member_t asn_MBR_UplinkConfigCommonSIB_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UplinkConfigCommonSIB_H_ */
#include "asn_internal.h"
