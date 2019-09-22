/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#ifndef	_SRB_Identity_H_
#define	_SRB_Identity_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SRB-Identity */
typedef long	 SRB_Identity_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SRB_Identity_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SRB_Identity;
asn_struct_free_f SRB_Identity_free;
asn_struct_print_f SRB_Identity_print;
asn_constr_check_f SRB_Identity_constraint;
ber_type_decoder_f SRB_Identity_decode_ber;
der_type_encoder_f SRB_Identity_encode_der;
xer_type_decoder_f SRB_Identity_decode_xer;
xer_type_encoder_f SRB_Identity_encode_xer;
oer_type_decoder_f SRB_Identity_decode_oer;
oer_type_encoder_f SRB_Identity_encode_oer;
per_type_decoder_f SRB_Identity_decode_uper;
per_type_encoder_f SRB_Identity_encode_uper;
per_type_decoder_f SRB_Identity_decode_aper;
per_type_encoder_f SRB_Identity_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SRB_Identity_H_ */
#include "asn_internal.h"
