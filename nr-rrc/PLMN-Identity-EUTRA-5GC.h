/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_PLMN_Identity_EUTRA_5GC_H_
#define	_PLMN_Identity_EUTRA_5GC_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PLMN_Identity_EUTRA_5GC_PR {
	PLMN_Identity_EUTRA_5GC_PR_NOTHING,	/* No components present */
	PLMN_Identity_EUTRA_5GC_PR_plmn_Identity_EUTRA_5GC,
	PLMN_Identity_EUTRA_5GC_PR_plmn_index
} PLMN_Identity_EUTRA_5GC_PR;

/* Forward declarations */
struct PLMN_Identity;

/* PLMN-Identity-EUTRA-5GC */
typedef struct PLMN_Identity_EUTRA_5GC {
	PLMN_Identity_EUTRA_5GC_PR present;
	union {
		struct PLMN_Identity	*plmn_Identity_EUTRA_5GC;
		long	 plmn_index;
	};
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_Identity_EUTRA_5GC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_Identity_EUTRA_5GC;
extern asn_CHOICE_specifics_t asn_SPC_PLMN_Identity_EUTRA_5GC_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMN_Identity_EUTRA_5GC_1[2];
extern asn_per_constraints_t asn_PER_type_PLMN_Identity_EUTRA_5GC_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-Identity.h"

#endif	/* _PLMN_Identity_EUTRA_5GC_H_ */
#include "asn_internal.h"
