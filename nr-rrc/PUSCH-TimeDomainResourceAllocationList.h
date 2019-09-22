/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_PUSCH_TimeDomainResourceAllocationList_H_
#define	_PUSCH_TimeDomainResourceAllocationList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PUSCH_TimeDomainResourceAllocation;

/* PUSCH-TimeDomainResourceAllocationList */
typedef struct PUSCH_TimeDomainResourceAllocationList {
	A_SEQUENCE_OF(struct PUSCH_TimeDomainResourceAllocation) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_TimeDomainResourceAllocationList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_TimeDomainResourceAllocationList;
extern asn_SET_OF_specifics_t asn_SPC_PUSCH_TimeDomainResourceAllocationList_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_TimeDomainResourceAllocationList_1[1];
extern asn_per_constraints_t asn_PER_type_PUSCH_TimeDomainResourceAllocationList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PUSCH-TimeDomainResourceAllocation.h"

#endif	/* _PUSCH_TimeDomainResourceAllocationList_H_ */
#include "asn_internal.h"
