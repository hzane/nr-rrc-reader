/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "DL-CCCH-MessageType.h"

static asn_oer_constraints_t asn_OER_type_c1_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_c1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_DL_CCCH_MessageType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_DL_CCCH_MessageType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_c1_2[] = {
	{ ATF_POINTER, 0, offsetof(struct DL_CCCH_MessageType__c1, rrcReject),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCReject,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcReject"
		},
	{ ATF_POINTER, 0, offsetof(struct DL_CCCH_MessageType__c1, rrcSetup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCSetup,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcSetup"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CCCH_MessageType__c1, spare2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_CCCH_MessageType__c1, spare1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_c1_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcReject */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rrcSetup */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* spare2 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* spare1 */
};
static asn_CHOICE_specifics_t asn_SPC_c1_specs_2 = {
	sizeof(struct DL_CCCH_MessageType__c1),
	offsetof(struct DL_CCCH_MessageType__c1, _asn_ctx),
	offsetof(struct DL_CCCH_MessageType__c1, present),
	sizeof(((struct DL_CCCH_MessageType__c1 *)0)->present),
	asn_MAP_c1_tag2el_2,
	4,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c1_2 = {
	"c1",
	"c1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_c1_constr_2, &asn_PER_type_c1_constr_2, CHOICE_constraint },
	asn_MBR_c1_2,
	4,	/* Elements count */
	&asn_SPC_c1_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_messageClassExtension_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_messageClassExtension_specs_7 = {
	sizeof(struct DL_CCCH_MessageType__messageClassExtension),
	offsetof(struct DL_CCCH_MessageType__messageClassExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messageClassExtension_7 = {
	"messageClassExtension",
	"messageClassExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_messageClassExtension_tags_7,
	sizeof(asn_DEF_messageClassExtension_tags_7)
		/sizeof(asn_DEF_messageClassExtension_tags_7[0]) - 1, /* 1 */
	asn_DEF_messageClassExtension_tags_7,	/* Same as above */
	sizeof(asn_DEF_messageClassExtension_tags_7)
		/sizeof(asn_DEF_messageClassExtension_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_messageClassExtension_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DL_CCCH_MessageType_1[] = {
	{ ATF_POINTER, 0, offsetof(struct DL_CCCH_MessageType, c1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_c1_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c1"
		},
	{ ATF_POINTER, 0, offsetof(struct DL_CCCH_MessageType, messageClassExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_messageClassExtension_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageClassExtension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_DL_CCCH_MessageType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtension */
};
asn_CHOICE_specifics_t asn_SPC_DL_CCCH_MessageType_specs_1 = {
	sizeof(struct DL_CCCH_MessageType),
	offsetof(struct DL_CCCH_MessageType, _asn_ctx),
	offsetof(struct DL_CCCH_MessageType, present),
	sizeof(((struct DL_CCCH_MessageType *)0)->present),
	asn_MAP_DL_CCCH_MessageType_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_DL_CCCH_MessageType = {
	"DL-CCCH-MessageType",
	"DL-CCCH-MessageType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_DL_CCCH_MessageType_constr_1, &asn_PER_type_DL_CCCH_MessageType_constr_1, CHOICE_constraint },
	asn_MBR_DL_CCCH_MessageType_1,
	2,	/* Elements count */
	&asn_SPC_DL_CCCH_MessageType_specs_1	/* Additional specs */
};

