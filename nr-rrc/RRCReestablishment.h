/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_RRCReestablishment_H_
#define	_RRCReestablishment_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCReestablishment__criticalExtensions_PR {
	RRCReestablishment__criticalExtensions_PR_NOTHING,	/* No components present */
	RRCReestablishment__criticalExtensions_PR_rrcReestablishment,
	RRCReestablishment__criticalExtensions_PR_criticalExtensionsFuture
} RRCReestablishment__criticalExtensions_PR;

/* Forward declarations */
struct RRCReestablishment_IEs;

/* RRCReestablishment */
typedef struct RRCReestablishment {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct RRCReestablishment__criticalExtensions {
		RRCReestablishment__criticalExtensions_PR present;
		union {
			struct RRCReestablishment_IEs	*rrcReestablishment;
			struct RRCReestablishment__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		};
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCReestablishment_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCReestablishment;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCReestablishment_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCReestablishment_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCReestablishment-IEs.h"

#endif	/* _RRCReestablishment_H_ */
#include "asn_internal.h"
