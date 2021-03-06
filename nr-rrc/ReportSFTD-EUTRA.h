/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_ReportSFTD_EUTRA_H_
#define	_ReportSFTD_EUTRA_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BOOLEAN.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ReportSFTD-EUTRA */
typedef struct ReportSFTD_EUTRA {
	BOOLEAN_t	 reportSFTD_Meas;
	BOOLEAN_t	 reportRSRP;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportSFTD_EUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportSFTD_EUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_ReportSFTD_EUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_ReportSFTD_EUTRA_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ReportSFTD_EUTRA_H_ */
#include "asn_internal.h"
