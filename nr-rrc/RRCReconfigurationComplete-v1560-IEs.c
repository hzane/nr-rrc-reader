/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "RRCReconfigurationComplete-v1560-IEs.h"

static asn_oer_constraints_t asn_OER_type_scg_Response_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_scg_Response_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_scg_Response_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfigurationComplete_v1560_IEs__scg_Response, nr_SCG_Response),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr-SCG-Response"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCReconfigurationComplete_v1560_IEs__scg_Response, eutra_SCG_Response),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-SCG-Response"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_scg_Response_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-SCG-Response */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eutra-SCG-Response */
};
static asn_CHOICE_specifics_t asn_SPC_scg_Response_specs_2 = {
	sizeof(struct RRCReconfigurationComplete_v1560_IEs__scg_Response),
	offsetof(struct RRCReconfigurationComplete_v1560_IEs__scg_Response, _asn_ctx),
	offsetof(struct RRCReconfigurationComplete_v1560_IEs__scg_Response, present),
	sizeof(((struct RRCReconfigurationComplete_v1560_IEs__scg_Response *)0)->present),
	asn_MAP_scg_Response_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scg_Response_2 = {
	"scg-Response",
	"scg-Response",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_scg_Response_constr_2, &asn_PER_type_scg_Response_constr_2, CHOICE_constraint },
	asn_MBR_scg_Response_2,
	2,	/* Elements count */
	&asn_SPC_scg_Response_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_5 = {
	sizeof(struct RRCReconfigurationComplete_v1560_IEs__nonCriticalExtension),
	offsetof(struct RRCReconfigurationComplete_v1560_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_5 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_5,
	sizeof(asn_DEF_nonCriticalExtension_tags_5)
		/sizeof(asn_DEF_nonCriticalExtension_tags_5[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_5,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_5)
		/sizeof(asn_DEF_nonCriticalExtension_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCReconfigurationComplete_v1560_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct RRCReconfigurationComplete_v1560_IEs, scg_Response),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_scg_Response_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"scg-Response"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCReconfigurationComplete_v1560_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCReconfigurationComplete_v1560_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_RRCReconfigurationComplete_v1560_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCReconfigurationComplete_v1560_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scg-Response */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCReconfigurationComplete_v1560_IEs_specs_1 = {
	sizeof(struct RRCReconfigurationComplete_v1560_IEs),
	offsetof(struct RRCReconfigurationComplete_v1560_IEs, _asn_ctx),
	asn_MAP_RRCReconfigurationComplete_v1560_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RRCReconfigurationComplete_v1560_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCReconfigurationComplete_v1560_IEs = {
	"RRCReconfigurationComplete-v1560-IEs",
	"RRCReconfigurationComplete-v1560-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCReconfigurationComplete_v1560_IEs_tags_1,
	sizeof(asn_DEF_RRCReconfigurationComplete_v1560_IEs_tags_1)
		/sizeof(asn_DEF_RRCReconfigurationComplete_v1560_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCReconfigurationComplete_v1560_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCReconfigurationComplete_v1560_IEs_tags_1)
		/sizeof(asn_DEF_RRCReconfigurationComplete_v1560_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCReconfigurationComplete_v1560_IEs_1,
	2,	/* Elements count */
	&asn_SPC_RRCReconfigurationComplete_v1560_IEs_specs_1	/* Additional specs */
};

