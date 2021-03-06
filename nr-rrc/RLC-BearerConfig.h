/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_RLC_BearerConfig_H_
#define	_RLC_BearerConfig_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LogicalChannelIdentity.h"
#include "NativeEnumerated.h"
#include "SRB-Identity.h"
#include "DRB-Identity.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_BearerConfig__servedRadioBearer_PR {
	RLC_BearerConfig__servedRadioBearer_PR_NOTHING,	/* No components present */
	RLC_BearerConfig__servedRadioBearer_PR_srb_Identity,
	RLC_BearerConfig__servedRadioBearer_PR_drb_Identity
} RLC_BearerConfig__servedRadioBearer_PR;
typedef enum RLC_BearerConfig__reestablishRLC {
	RLC_BearerConfig__reestablishRLC_true	= 0
} e_RLC_BearerConfig__reestablishRLC;

/* Forward declarations */
struct RLC_Config;
struct LogicalChannelConfig;

/* RLC-BearerConfig */
typedef struct RLC_BearerConfig {
	LogicalChannelIdentity_t	 logicalChannelIdentity;
	struct RLC_BearerConfig__servedRadioBearer {
		RLC_BearerConfig__servedRadioBearer_PR present;
		union {
			SRB_Identity_t	 srb_Identity;
			DRB_Identity_t	 drb_Identity;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *servedRadioBearer;
	long	*reestablishRLC;	/* OPTIONAL */
	struct RLC_Config	*rlc_Config;	/* OPTIONAL */
	struct LogicalChannelConfig	*mac_LogicalChannelConfig;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_BearerConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_reestablishRLC_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RLC_BearerConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_RLC_BearerConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_RLC_BearerConfig_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RLC-Config.h"
#include "LogicalChannelConfig.h"

#endif	/* _RLC_BearerConfig_H_ */
#include "asn_internal.h"
