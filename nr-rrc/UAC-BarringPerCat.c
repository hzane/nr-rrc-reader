/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "UAC-BarringPerCat.h"

static int
memb_accessCategory_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_accessCategory_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (1..63) */,
	-1};
static asn_per_constraints_t asn_PER_memb_accessCategory_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (1..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UAC_BarringPerCat_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UAC_BarringPerCat, accessCategory),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_accessCategory_constr_2, &asn_PER_memb_accessCategory_constr_2,  memb_accessCategory_constraint_1 },
		0, 0, /* No default value */
		"accessCategory"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UAC_BarringPerCat, uac_barringInfoSetIndex),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UAC_BarringInfoSetIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uac-barringInfoSetIndex"
		},
};
static const ber_tlv_tag_t asn_DEF_UAC_BarringPerCat_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UAC_BarringPerCat_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* accessCategory */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uac-barringInfoSetIndex */
};
asn_SEQUENCE_specifics_t asn_SPC_UAC_BarringPerCat_specs_1 = {
	sizeof(struct UAC_BarringPerCat),
	offsetof(struct UAC_BarringPerCat, _asn_ctx),
	asn_MAP_UAC_BarringPerCat_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UAC_BarringPerCat = {
	"UAC-BarringPerCat",
	"UAC-BarringPerCat",
	&asn_OP_SEQUENCE,
	asn_DEF_UAC_BarringPerCat_tags_1,
	sizeof(asn_DEF_UAC_BarringPerCat_tags_1)
		/sizeof(asn_DEF_UAC_BarringPerCat_tags_1[0]), /* 1 */
	asn_DEF_UAC_BarringPerCat_tags_1,	/* Same as above */
	sizeof(asn_DEF_UAC_BarringPerCat_tags_1)
		/sizeof(asn_DEF_UAC_BarringPerCat_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UAC_BarringPerCat_1,
	2,	/* Elements count */
	&asn_SPC_UAC_BarringPerCat_specs_1	/* Additional specs */
};

