/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "Phy-ParametersFR2.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_dummy_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_dummy_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pdsch_RE_MappingFR2_PerSymbol_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pdsch_RE_MappingFR2_PerSymbol_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pCell_FR2_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pCell_FR2_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pdsch_RE_MappingFR2_PerSlot_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_pdsch_RE_MappingFR2_PerSlot_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_dummy_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_dummy_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dummy_specs_2 = {
	asn_MAP_dummy_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_dummy_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dummy_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dummy_2 = {
	"dummy",
	"dummy",
	&asn_OP_NativeEnumerated,
	asn_DEF_dummy_tags_2,
	sizeof(asn_DEF_dummy_tags_2)
		/sizeof(asn_DEF_dummy_tags_2[0]) - 1, /* 1 */
	asn_DEF_dummy_tags_2,	/* Same as above */
	sizeof(asn_DEF_dummy_tags_2)
		/sizeof(asn_DEF_dummy_tags_2[0]), /* 2 */
	{ &asn_OER_type_dummy_constr_2, &asn_PER_type_dummy_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dummy_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pdsch_RE_MappingFR2_PerSymbol_value2enum_4[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n20" }
};
static const unsigned int asn_MAP_pdsch_RE_MappingFR2_PerSymbol_enum2value_4[] = {
	1,	/* n20(1) */
	0	/* n6(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdsch_RE_MappingFR2_PerSymbol_specs_4 = {
	asn_MAP_pdsch_RE_MappingFR2_PerSymbol_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_pdsch_RE_MappingFR2_PerSymbol_enum2value_4,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdsch_RE_MappingFR2_PerSymbol_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdsch_RE_MappingFR2_PerSymbol_4 = {
	"pdsch-RE-MappingFR2-PerSymbol",
	"pdsch-RE-MappingFR2-PerSymbol",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdsch_RE_MappingFR2_PerSymbol_tags_4,
	sizeof(asn_DEF_pdsch_RE_MappingFR2_PerSymbol_tags_4)
		/sizeof(asn_DEF_pdsch_RE_MappingFR2_PerSymbol_tags_4[0]) - 1, /* 1 */
	asn_DEF_pdsch_RE_MappingFR2_PerSymbol_tags_4,	/* Same as above */
	sizeof(asn_DEF_pdsch_RE_MappingFR2_PerSymbol_tags_4)
		/sizeof(asn_DEF_pdsch_RE_MappingFR2_PerSymbol_tags_4[0]), /* 2 */
	{ &asn_OER_type_pdsch_RE_MappingFR2_PerSymbol_constr_4, &asn_PER_type_pdsch_RE_MappingFR2_PerSymbol_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdsch_RE_MappingFR2_PerSymbol_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pCell_FR2_value2enum_9[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_pCell_FR2_enum2value_9[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_pCell_FR2_specs_9 = {
	asn_MAP_pCell_FR2_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_pCell_FR2_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pCell_FR2_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pCell_FR2_9 = {
	"pCell-FR2",
	"pCell-FR2",
	&asn_OP_NativeEnumerated,
	asn_DEF_pCell_FR2_tags_9,
	sizeof(asn_DEF_pCell_FR2_tags_9)
		/sizeof(asn_DEF_pCell_FR2_tags_9[0]) - 1, /* 1 */
	asn_DEF_pCell_FR2_tags_9,	/* Same as above */
	sizeof(asn_DEF_pCell_FR2_tags_9)
		/sizeof(asn_DEF_pCell_FR2_tags_9[0]), /* 2 */
	{ &asn_OER_type_pCell_FR2_constr_9, &asn_PER_type_pCell_FR2_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pCell_FR2_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_pdsch_RE_MappingFR2_PerSlot_value2enum_11[] = {
	{ 0,	3,	"n16" },
	{ 1,	3,	"n32" },
	{ 2,	3,	"n48" },
	{ 3,	3,	"n64" },
	{ 4,	3,	"n80" },
	{ 5,	3,	"n96" },
	{ 6,	4,	"n112" },
	{ 7,	4,	"n128" },
	{ 8,	4,	"n144" },
	{ 9,	4,	"n160" },
	{ 10,	4,	"n176" },
	{ 11,	4,	"n192" },
	{ 12,	4,	"n208" },
	{ 13,	4,	"n224" },
	{ 14,	4,	"n240" },
	{ 15,	4,	"n256" }
};
static const unsigned int asn_MAP_pdsch_RE_MappingFR2_PerSlot_enum2value_11[] = {
	6,	/* n112(6) */
	7,	/* n128(7) */
	8,	/* n144(8) */
	0,	/* n16(0) */
	9,	/* n160(9) */
	10,	/* n176(10) */
	11,	/* n192(11) */
	12,	/* n208(12) */
	13,	/* n224(13) */
	14,	/* n240(14) */
	15,	/* n256(15) */
	1,	/* n32(1) */
	2,	/* n48(2) */
	3,	/* n64(3) */
	4,	/* n80(4) */
	5	/* n96(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_pdsch_RE_MappingFR2_PerSlot_specs_11 = {
	asn_MAP_pdsch_RE_MappingFR2_PerSlot_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_pdsch_RE_MappingFR2_PerSlot_enum2value_11,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_pdsch_RE_MappingFR2_PerSlot_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pdsch_RE_MappingFR2_PerSlot_11 = {
	"pdsch-RE-MappingFR2-PerSlot",
	"pdsch-RE-MappingFR2-PerSlot",
	&asn_OP_NativeEnumerated,
	asn_DEF_pdsch_RE_MappingFR2_PerSlot_tags_11,
	sizeof(asn_DEF_pdsch_RE_MappingFR2_PerSlot_tags_11)
		/sizeof(asn_DEF_pdsch_RE_MappingFR2_PerSlot_tags_11[0]) - 1, /* 1 */
	asn_DEF_pdsch_RE_MappingFR2_PerSlot_tags_11,	/* Same as above */
	sizeof(asn_DEF_pdsch_RE_MappingFR2_PerSlot_tags_11)
		/sizeof(asn_DEF_pdsch_RE_MappingFR2_PerSlot_tags_11[0]), /* 2 */
	{ &asn_OER_type_pdsch_RE_MappingFR2_PerSlot_constr_11, &asn_PER_type_pdsch_RE_MappingFR2_PerSlot_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pdsch_RE_MappingFR2_PerSlot_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_8[] = {
	{ ATF_POINTER, 2, offsetof(struct Phy_ParametersFR2__ext1, pCell_FR2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pCell_FR2_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pCell-FR2"
		},
	{ ATF_POINTER, 1, offsetof(struct Phy_ParametersFR2__ext1, pdsch_RE_MappingFR2_PerSlot),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdsch_RE_MappingFR2_PerSlot_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-RE-MappingFR2-PerSlot"
		},
};
static const int asn_MAP_ext1_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pCell-FR2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pdsch-RE-MappingFR2-PerSlot */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_8 = {
	sizeof(struct Phy_ParametersFR2__ext1),
	offsetof(struct Phy_ParametersFR2__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_ext1_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_8 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_8,
	sizeof(asn_DEF_ext1_tags_8)
		/sizeof(asn_DEF_ext1_tags_8[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_8,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_8)
		/sizeof(asn_DEF_ext1_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_8,
	2,	/* Elements count */
	&asn_SPC_ext1_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Phy_ParametersFR2_1[] = {
	{ ATF_POINTER, 3, offsetof(struct Phy_ParametersFR2, dummy),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dummy_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
	{ ATF_POINTER, 2, offsetof(struct Phy_ParametersFR2, pdsch_RE_MappingFR2_PerSymbol),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pdsch_RE_MappingFR2_PerSymbol_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-RE-MappingFR2-PerSymbol"
		},
	{ ATF_POINTER, 1, offsetof(struct Phy_ParametersFR2, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_Phy_ParametersFR2_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_Phy_ParametersFR2_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Phy_ParametersFR2_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdsch-RE-MappingFR2-PerSymbol */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_Phy_ParametersFR2_specs_1 = {
	sizeof(struct Phy_ParametersFR2),
	offsetof(struct Phy_ParametersFR2, _asn_ctx),
	asn_MAP_Phy_ParametersFR2_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Phy_ParametersFR2_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Phy_ParametersFR2 = {
	"Phy-ParametersFR2",
	"Phy-ParametersFR2",
	&asn_OP_SEQUENCE,
	asn_DEF_Phy_ParametersFR2_tags_1,
	sizeof(asn_DEF_Phy_ParametersFR2_tags_1)
		/sizeof(asn_DEF_Phy_ParametersFR2_tags_1[0]), /* 1 */
	asn_DEF_Phy_ParametersFR2_tags_1,	/* Same as above */
	sizeof(asn_DEF_Phy_ParametersFR2_tags_1)
		/sizeof(asn_DEF_Phy_ParametersFR2_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Phy_ParametersFR2_1,
	3,	/* Elements count */
	&asn_SPC_Phy_ParametersFR2_specs_1	/* Additional specs */
};

