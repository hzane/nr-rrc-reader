/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "MeasObjectToAddMod.h"

static asn_oer_constraints_t asn_OER_type_measObject_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_measObject_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_measObject_3[] = {
	{ ATF_POINTER, 0, offsetof(struct MeasObjectToAddMod__measObject, measObjectNR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectNR"
		},
	{ ATF_POINTER, 0, offsetof(struct MeasObjectToAddMod__measObject, measObjectEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectEUTRA"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_measObject_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measObjectNR */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measObjectEUTRA */
};
static asn_CHOICE_specifics_t asn_SPC_measObject_specs_3 = {
	sizeof(struct MeasObjectToAddMod__measObject),
	offsetof(struct MeasObjectToAddMod__measObject, _asn_ctx),
	offsetof(struct MeasObjectToAddMod__measObject, present),
	sizeof(((struct MeasObjectToAddMod__measObject *)0)->present),
	asn_MAP_measObject_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measObject_3 = {
	"measObject",
	"measObject",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_measObject_constr_3, &asn_PER_type_measObject_constr_3, CHOICE_constraint },
	asn_MBR_measObject_3,
	2,	/* Elements count */
	&asn_SPC_measObject_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MeasObjectToAddMod_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddMod, measObjectId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasObjectId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasObjectToAddMod, measObject),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_measObject_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObject"
		},
};
static const ber_tlv_tag_t asn_DEF_MeasObjectToAddMod_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasObjectToAddMod_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measObjectId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measObject */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasObjectToAddMod_specs_1 = {
	sizeof(struct MeasObjectToAddMod),
	offsetof(struct MeasObjectToAddMod, _asn_ctx),
	asn_MAP_MeasObjectToAddMod_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasObjectToAddMod = {
	"MeasObjectToAddMod",
	"MeasObjectToAddMod",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasObjectToAddMod_tags_1,
	sizeof(asn_DEF_MeasObjectToAddMod_tags_1)
		/sizeof(asn_DEF_MeasObjectToAddMod_tags_1[0]), /* 1 */
	asn_DEF_MeasObjectToAddMod_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasObjectToAddMod_tags_1)
		/sizeof(asn_DEF_MeasObjectToAddMod_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasObjectToAddMod_1,
	2,	/* Elements count */
	&asn_SPC_MeasObjectToAddMod_specs_1	/* Additional specs */
};

