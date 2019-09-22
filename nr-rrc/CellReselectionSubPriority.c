/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "CellReselectionSubPriority.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_CellReselectionSubPriority_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_CellReselectionSubPriority_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_CellReselectionSubPriority_value2enum_1[] = {
	{ 0,	5,	"oDot2" },
	{ 1,	5,	"oDot4" },
	{ 2,	5,	"oDot6" },
	{ 3,	5,	"oDot8" }
};
static const unsigned int asn_MAP_CellReselectionSubPriority_enum2value_1[] = {
	0,	/* oDot2(0) */
	1,	/* oDot4(1) */
	2,	/* oDot6(2) */
	3	/* oDot8(3) */
};
const asn_INTEGER_specifics_t asn_SPC_CellReselectionSubPriority_specs_1 = {
	asn_MAP_CellReselectionSubPriority_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_CellReselectionSubPriority_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_CellReselectionSubPriority_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CellReselectionSubPriority = {
	"CellReselectionSubPriority",
	"CellReselectionSubPriority",
	&asn_OP_NativeEnumerated,
	asn_DEF_CellReselectionSubPriority_tags_1,
	sizeof(asn_DEF_CellReselectionSubPriority_tags_1)
		/sizeof(asn_DEF_CellReselectionSubPriority_tags_1[0]), /* 1 */
	asn_DEF_CellReselectionSubPriority_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellReselectionSubPriority_tags_1)
		/sizeof(asn_DEF_CellReselectionSubPriority_tags_1[0]), /* 1 */
	{ &asn_OER_type_CellReselectionSubPriority_constr_1, &asn_PER_type_CellReselectionSubPriority_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_CellReselectionSubPriority_specs_1	/* Additional specs */
};

