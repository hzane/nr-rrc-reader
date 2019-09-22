/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "MeasResultSFTD-EUTRA.h"

static int
memb_sfn_OffsetResult_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_frameBoundaryOffsetResult_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -30720 && value <= 30719)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_sfn_OffsetResult_constr_3 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1023) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sfn_OffsetResult_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_frameBoundaryOffsetResult_constr_4 CC_NOTUSED = {
	{ 2, 0 }	/* (-30720..30719) */,
	-1};
static asn_per_constraints_t asn_PER_memb_frameBoundaryOffsetResult_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -30720,  30719 }	/* (-30720..30719) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MeasResultSFTD_EUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultSFTD_EUTRA, eutra_PhysCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-PhysCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultSFTD_EUTRA, sfn_OffsetResult),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sfn_OffsetResult_constr_3, &asn_PER_memb_sfn_OffsetResult_constr_3,  memb_sfn_OffsetResult_constraint_1 },
		0, 0, /* No default value */
		"sfn-OffsetResult"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultSFTD_EUTRA, frameBoundaryOffsetResult),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_frameBoundaryOffsetResult_constr_4, &asn_PER_memb_frameBoundaryOffsetResult_constr_4,  memb_frameBoundaryOffsetResult_constraint_1 },
		0, 0, /* No default value */
		"frameBoundaryOffsetResult"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultSFTD_EUTRA, rsrp_Result),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrp-Result"
		},
};
static const int asn_MAP_MeasResultSFTD_EUTRA_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_MeasResultSFTD_EUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultSFTD_EUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra-PhysCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sfn-OffsetResult */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* frameBoundaryOffsetResult */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* rsrp-Result */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultSFTD_EUTRA_specs_1 = {
	sizeof(struct MeasResultSFTD_EUTRA),
	offsetof(struct MeasResultSFTD_EUTRA, _asn_ctx),
	asn_MAP_MeasResultSFTD_EUTRA_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MeasResultSFTD_EUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultSFTD_EUTRA = {
	"MeasResultSFTD-EUTRA",
	"MeasResultSFTD-EUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultSFTD_EUTRA_tags_1,
	sizeof(asn_DEF_MeasResultSFTD_EUTRA_tags_1)
		/sizeof(asn_DEF_MeasResultSFTD_EUTRA_tags_1[0]), /* 1 */
	asn_DEF_MeasResultSFTD_EUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultSFTD_EUTRA_tags_1)
		/sizeof(asn_DEF_MeasResultSFTD_EUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultSFTD_EUTRA_1,
	4,	/* Elements count */
	&asn_SPC_MeasResultSFTD_EUTRA_specs_1	/* Additional specs */
};

