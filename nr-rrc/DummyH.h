/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_DummyH_H_
#define	_DummyH_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DummyH */
typedef struct DummyH {
	long	 burstLength;
	long	 maxSimultaneousResourceSetsPerCC;
	long	 maxConfiguredResourceSetsPerCC;
	long	 maxConfiguredResourceSetsAllCC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DummyH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DummyH;
extern asn_SEQUENCE_specifics_t asn_SPC_DummyH_specs_1;
extern asn_TYPE_member_t asn_MBR_DummyH_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _DummyH_H_ */
#include "asn_internal.h"
