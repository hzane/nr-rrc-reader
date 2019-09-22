/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "PTRS-DownlinkConfig.h"

static int
memb_NativeInteger_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 276)) {
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
memb_NativeInteger_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 29)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_frequencyDensity_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size == 2)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_timeDensity_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size == 3)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_epre_Ratio_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_Member_constr_3 CC_NOTUSED = {
	{ 2, 1 }	/* (1..276) */,
	-1};
static asn_per_constraints_t asn_PER_memb_Member_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  1,  276 }	/* (1..276) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_frequencyDensity_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_type_frequencyDensity_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_Member_constr_5 CC_NOTUSED = {
	{ 1, 1 }	/* (0..29) */,
	-1};
static asn_per_constraints_t asn_PER_memb_Member_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  29 }	/* (0..29) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_timeDensity_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	3	/* (SIZE(3..3)) */};
static asn_per_constraints_t asn_PER_type_timeDensity_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_resourceElementOffset_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_resourceElementOffset_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_frequencyDensity_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_memb_frequencyDensity_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_timeDensity_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	3	/* (SIZE(3..3)) */};
static asn_per_constraints_t asn_PER_memb_timeDensity_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_epre_Ratio_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (0..3) */,
	-1};
static asn_per_constraints_t asn_PER_memb_epre_Ratio_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_frequencyDensity_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_Member_constr_3, &asn_PER_memb_Member_constr_3,  memb_NativeInteger_constraint_2 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_frequencyDensity_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_frequencyDensity_specs_2 = {
	sizeof(struct PTRS_DownlinkConfig__frequencyDensity),
	offsetof(struct PTRS_DownlinkConfig__frequencyDensity, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_frequencyDensity_2 = {
	"frequencyDensity",
	"frequencyDensity",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_frequencyDensity_tags_2,
	sizeof(asn_DEF_frequencyDensity_tags_2)
		/sizeof(asn_DEF_frequencyDensity_tags_2[0]) - 1, /* 1 */
	asn_DEF_frequencyDensity_tags_2,	/* Same as above */
	sizeof(asn_DEF_frequencyDensity_tags_2)
		/sizeof(asn_DEF_frequencyDensity_tags_2[0]), /* 2 */
	{ &asn_OER_type_frequencyDensity_constr_2, &asn_PER_type_frequencyDensity_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_frequencyDensity_2,
	1,	/* Single element */
	&asn_SPC_frequencyDensity_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_timeDensity_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_Member_constr_5, &asn_PER_memb_Member_constr_5,  memb_NativeInteger_constraint_4 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_timeDensity_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_timeDensity_specs_4 = {
	sizeof(struct PTRS_DownlinkConfig__timeDensity),
	offsetof(struct PTRS_DownlinkConfig__timeDensity, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_timeDensity_4 = {
	"timeDensity",
	"timeDensity",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_timeDensity_tags_4,
	sizeof(asn_DEF_timeDensity_tags_4)
		/sizeof(asn_DEF_timeDensity_tags_4[0]) - 1, /* 1 */
	asn_DEF_timeDensity_tags_4,	/* Same as above */
	sizeof(asn_DEF_timeDensity_tags_4)
		/sizeof(asn_DEF_timeDensity_tags_4[0]), /* 2 */
	{ &asn_OER_type_timeDensity_constr_4, &asn_PER_type_timeDensity_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_timeDensity_4,
	1,	/* Single element */
	&asn_SPC_timeDensity_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_resourceElementOffset_value2enum_7[] = {
	{ 0,	8,	"offset01" },
	{ 1,	8,	"offset10" },
	{ 2,	8,	"offset11" }
};
static const unsigned int asn_MAP_resourceElementOffset_enum2value_7[] = {
	0,	/* offset01(0) */
	1,	/* offset10(1) */
	2	/* offset11(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_resourceElementOffset_specs_7 = {
	asn_MAP_resourceElementOffset_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_resourceElementOffset_enum2value_7,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_resourceElementOffset_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resourceElementOffset_7 = {
	"resourceElementOffset",
	"resourceElementOffset",
	&asn_OP_NativeEnumerated,
	asn_DEF_resourceElementOffset_tags_7,
	sizeof(asn_DEF_resourceElementOffset_tags_7)
		/sizeof(asn_DEF_resourceElementOffset_tags_7[0]) - 1, /* 1 */
	asn_DEF_resourceElementOffset_tags_7,	/* Same as above */
	sizeof(asn_DEF_resourceElementOffset_tags_7)
		/sizeof(asn_DEF_resourceElementOffset_tags_7[0]), /* 2 */
	{ &asn_OER_type_resourceElementOffset_constr_7, &asn_PER_type_resourceElementOffset_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_resourceElementOffset_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PTRS_DownlinkConfig_1[] = {
	{ ATF_POINTER, 4, offsetof(struct PTRS_DownlinkConfig, frequencyDensity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_frequencyDensity_2,
		0,
		{ &asn_OER_memb_frequencyDensity_constr_2, &asn_PER_memb_frequencyDensity_constr_2,  memb_frequencyDensity_constraint_1 },
		0, 0, /* No default value */
		"frequencyDensity"
		},
	{ ATF_POINTER, 3, offsetof(struct PTRS_DownlinkConfig, timeDensity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_timeDensity_4,
		0,
		{ &asn_OER_memb_timeDensity_constr_4, &asn_PER_memb_timeDensity_constr_4,  memb_timeDensity_constraint_1 },
		0, 0, /* No default value */
		"timeDensity"
		},
	{ ATF_POINTER, 2, offsetof(struct PTRS_DownlinkConfig, epre_Ratio),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_epre_Ratio_constr_6, &asn_PER_memb_epre_Ratio_constr_6,  memb_epre_Ratio_constraint_1 },
		0, 0, /* No default value */
		"epre-Ratio"
		},
	{ ATF_POINTER, 1, offsetof(struct PTRS_DownlinkConfig, resourceElementOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_resourceElementOffset_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resourceElementOffset"
		},
};
static const int asn_MAP_PTRS_DownlinkConfig_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_PTRS_DownlinkConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PTRS_DownlinkConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* frequencyDensity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* timeDensity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* epre-Ratio */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* resourceElementOffset */
};
asn_SEQUENCE_specifics_t asn_SPC_PTRS_DownlinkConfig_specs_1 = {
	sizeof(struct PTRS_DownlinkConfig),
	offsetof(struct PTRS_DownlinkConfig, _asn_ctx),
	asn_MAP_PTRS_DownlinkConfig_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PTRS_DownlinkConfig_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PTRS_DownlinkConfig = {
	"PTRS-DownlinkConfig",
	"PTRS-DownlinkConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_PTRS_DownlinkConfig_tags_1,
	sizeof(asn_DEF_PTRS_DownlinkConfig_tags_1)
		/sizeof(asn_DEF_PTRS_DownlinkConfig_tags_1[0]), /* 1 */
	asn_DEF_PTRS_DownlinkConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_PTRS_DownlinkConfig_tags_1)
		/sizeof(asn_DEF_PTRS_DownlinkConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PTRS_DownlinkConfig_1,
	4,	/* Elements count */
	&asn_SPC_PTRS_DownlinkConfig_specs_1	/* Additional specs */
};

