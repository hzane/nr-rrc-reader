/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#include "UE-NR-Capability-v1540.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_overheatingInd_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_overheatingInd_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_overheatingInd_value2enum_3[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_overheatingInd_enum2value_3[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_overheatingInd_specs_3 = {
	asn_MAP_overheatingInd_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_overheatingInd_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_overheatingInd_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_overheatingInd_3 = {
	"overheatingInd",
	"overheatingInd",
	&asn_OP_NativeEnumerated,
	asn_DEF_overheatingInd_tags_3,
	sizeof(asn_DEF_overheatingInd_tags_3)
		/sizeof(asn_DEF_overheatingInd_tags_3[0]) - 1, /* 1 */
	asn_DEF_overheatingInd_tags_3,	/* Same as above */
	sizeof(asn_DEF_overheatingInd_tags_3)
		/sizeof(asn_DEF_overheatingInd_tags_3[0]), /* 2 */
	{ &asn_OER_type_overheatingInd_constr_3, &asn_PER_type_overheatingInd_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_overheatingInd_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_NR_Capability_v1540_1[] = {
	{ ATF_POINTER, 7, offsetof(struct UE_NR_Capability_v1540, sdap_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SDAP_Parameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sdap-Parameters"
		},
	{ ATF_POINTER, 6, offsetof(struct UE_NR_Capability_v1540, overheatingInd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_overheatingInd_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"overheatingInd"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_NR_Capability_v1540, ims_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IMS_Parameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ims-Parameters"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_NR_Capability_v1540, fr1_Add_UE_NR_Capabilities_v1540),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_NR_CapabilityAddFRX_Mode_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fr1-Add-UE-NR-Capabilities-v1540"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_NR_Capability_v1540, fr2_Add_UE_NR_Capabilities_v1540),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_NR_CapabilityAddFRX_Mode_v1540,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fr2-Add-UE-NR-Capabilities-v1540"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_NR_Capability_v1540, fr1_fr2_Add_UE_NR_Capabilities),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_NR_CapabilityAddFRX_Mode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fr1-fr2-Add-UE-NR-Capabilities"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_NR_Capability_v1540, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_NR_Capability_v1550,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_NR_Capability_v1540_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_UE_NR_Capability_v1540_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_NR_Capability_v1540_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sdap-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* overheatingInd */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ims-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* fr1-Add-UE-NR-Capabilities-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* fr2-Add-UE-NR-Capabilities-v1540 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* fr1-fr2-Add-UE-NR-Capabilities */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_NR_Capability_v1540_specs_1 = {
	sizeof(struct UE_NR_Capability_v1540),
	offsetof(struct UE_NR_Capability_v1540, _asn_ctx),
	asn_MAP_UE_NR_Capability_v1540_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_UE_NR_Capability_v1540_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_NR_Capability_v1540 = {
	"UE-NR-Capability-v1540",
	"UE-NR-Capability-v1540",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_NR_Capability_v1540_tags_1,
	sizeof(asn_DEF_UE_NR_Capability_v1540_tags_1)
		/sizeof(asn_DEF_UE_NR_Capability_v1540_tags_1[0]), /* 1 */
	asn_DEF_UE_NR_Capability_v1540_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_NR_Capability_v1540_tags_1)
		/sizeof(asn_DEF_UE_NR_Capability_v1540_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_NR_Capability_v1540_1,
	7,	/* Elements count */
	&asn_SPC_UE_NR_Capability_v1540_specs_1	/* Additional specs */
};
