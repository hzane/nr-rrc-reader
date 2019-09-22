/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#ifndef	_RRCResumeComplete_H_
#define	_RRCResumeComplete_H_


#include <skeletons/asn_application.h>

/* Including external dependencies */
#include <skeletons/constr_CHOICE.h>
#include <skeletons/constr_SEQUENCE.h>

#include "RRC-TransactionIdentifier.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCResumeComplete__criticalExtensions_PR {
	RRCResumeComplete__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCResumeComplete__criticalExtensions_PR_rrcResumeComplete,
	RRCResumeComplete__criticalExtensions_PR_criticalExtensionsFuture
} RRCResumeComplete__criticalExtensions_PR;

/* Forward declarations */
struct RRCResumeComplete_IEs;

/* RRCResumeComplete */
typedef struct RRCResumeComplete {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCResumeComplete__criticalExtensions {
		RRCResumeComplete__criticalExtensions_PR present;
		union RRCResumeComplete__criticalExtensions_u {
			struct RRCResumeComplete_IEs	*rrcResumeComplete;
			struct RRCResumeComplete__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCResumeComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCResumeComplete;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCResumeComplete_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCResumeComplete_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCResumeComplete-IEs.h"

#endif	/* _RRCResumeComplete_H_ */
#include <skeletons/asn_internal.h>