/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_DummyF_H_
#define	_DummyF_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DummyF */
typedef struct DummyF {
	long	 maxNumberPeriodicCSI_ReportPerBWP;
	long	 maxNumberAperiodicCSI_ReportPerBWP;
	long	 maxNumberSemiPersistentCSI_ReportPerBWP;
	long	 simultaneousCSI_ReportsAllCC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DummyF_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DummyF;
extern asn_SEQUENCE_specifics_t asn_SPC_DummyF_specs_1;
extern asn_TYPE_member_t asn_MBR_DummyF_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _DummyF_H_ */
#include "asn_internal.h"
