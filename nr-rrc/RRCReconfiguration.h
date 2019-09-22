/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_RRCReconfiguration_H_
#define	_RRCReconfiguration_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_CHOICE.h>
#include <skeletons/constr_SEQUENCE.h>

#include "RRC-TransactionIdentifier.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCReconfiguration__criticalExtensions_PR {
	RRCReconfiguration__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCReconfiguration__criticalExtensions_PR_rrcReconfiguration,
	RRCReconfiguration__criticalExtensions_PR_criticalExtensionsFuture
} RRCReconfiguration__criticalExtensions_PR;

/* Forward declarations */
struct RRCReconfiguration_IEs;

/* RRCReconfiguration */
typedef struct RRCReconfiguration {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCReconfiguration__criticalExtensions {
		RRCReconfiguration__criticalExtensions_PR present;
		union RRCReconfiguration__criticalExtensions_u {
			struct RRCReconfiguration_IEs	*rrcReconfiguration;
			struct RRCReconfiguration__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCReconfiguration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCReconfiguration;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCReconfiguration_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCReconfiguration_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCReconfiguration-IEs.h"

#endif	/* _RRCReconfiguration_H_ */
#include <skeletons/asn_internal.h>