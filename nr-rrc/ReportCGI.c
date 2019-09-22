/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -no-gen-example -fcompound-names -findirect-choice -gen-PER -pdu=all -fincludes-quoted -funnamed-unions -D nr-rrc`
 */

#include "ReportCGI.h"

asn_TYPE_member_t asn_MBR_ReportCGI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReportCGI, cellForWhichToReportCGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellForWhichToReportCGI"
		},
};
static const ber_tlv_tag_t asn_DEF_ReportCGI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReportCGI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cellForWhichToReportCGI */
};
asn_SEQUENCE_specifics_t asn_SPC_ReportCGI_specs_1 = {
	sizeof(struct ReportCGI),
	offsetof(struct ReportCGI, _asn_ctx),
	asn_MAP_ReportCGI_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReportCGI = {
	"ReportCGI",
	"ReportCGI",
	&asn_OP_SEQUENCE,
	asn_DEF_ReportCGI_tags_1,
	sizeof(asn_DEF_ReportCGI_tags_1)
		/sizeof(asn_DEF_ReportCGI_tags_1[0]), /* 1 */
	asn_DEF_ReportCGI_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReportCGI_tags_1)
		/sizeof(asn_DEF_ReportCGI_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReportCGI_1,
	1,	/* Elements count */
	&asn_SPC_ReportCGI_specs_1	/* Additional specs */
};

