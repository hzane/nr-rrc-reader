/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "38331-f60.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -findirect-choice -gen-PER -pdu=all -D nr-rrc`
 */

#include "ReferenceSignalConfig.h"

asn_TYPE_member_t asn_MBR_ReferenceSignalConfig_1[] = {
	{ ATF_POINTER, 2, offsetof(struct ReferenceSignalConfig, ssb_ConfigMobility),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SSB_ConfigMobility,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-ConfigMobility"
		},
	{ ATF_POINTER, 1, offsetof(struct ReferenceSignalConfig, csi_rs_ResourceConfigMobility),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SetupRelease_CSI_RS_ResourceConfigMobility,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"csi-rs-ResourceConfigMobility"
		},
};
static const int asn_MAP_ReferenceSignalConfig_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_ReferenceSignalConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReferenceSignalConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ssb-ConfigMobility */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* csi-rs-ResourceConfigMobility */
};
asn_SEQUENCE_specifics_t asn_SPC_ReferenceSignalConfig_specs_1 = {
	sizeof(struct ReferenceSignalConfig),
	offsetof(struct ReferenceSignalConfig, _asn_ctx),
	asn_MAP_ReferenceSignalConfig_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_ReferenceSignalConfig_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReferenceSignalConfig = {
	"ReferenceSignalConfig",
	"ReferenceSignalConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_ReferenceSignalConfig_tags_1,
	sizeof(asn_DEF_ReferenceSignalConfig_tags_1)
		/sizeof(asn_DEF_ReferenceSignalConfig_tags_1[0]), /* 1 */
	asn_DEF_ReferenceSignalConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReferenceSignalConfig_tags_1)
		/sizeof(asn_DEF_ReferenceSignalConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReferenceSignalConfig_1,
	2,	/* Elements count */
	&asn_SPC_ReferenceSignalConfig_specs_1	/* Additional specs */
};
