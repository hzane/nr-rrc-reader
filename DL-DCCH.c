#include "CellGroupConfig.h"
#include "DL-DCCH-Message.h"

int PERDecodeRRCReconfiguration(unsigned short MsgID, unsigned char* pRawData,int nNumber)
{
    asn_dec_rval_t ph = {RC_FAIL, 0};
	RRCReconfiguration_t *rrcReconfiguration = 0;
    CellGroupConfig_t *cellGroupConfig = 0;

	asn_dec_rval_t rval = aper_decode_complete(0,&asn_DEF_RRCReconfiguration,(void **)&rrcReconfiguration,pRawData,nNumber);

	RRCReconfiguration_IEs_t* rc = 	rrcReconfiguration ? rrcReconfiguration->criticalExtensions.rrcReconfiguration : 0;
	OCTET_STRING_t * sc = rc ? rc->secondaryCellGroup : 0;

    rval = sc ? aper_decode_complete(0,&asn_DEF_CellGroupConfig,(void**)&cellGroupConfig,sc->buf,sc->size) : ph;

    // xer_fprint(0, &asn_DEF_RRCReconfiguration, rrcReconfiguration);
    asn_fprint(0, &asn_DEF_CellGroupConfig, cellGroupConfig);

    ASN_STRUCT_FREE(asn_DEF_CellGroupConfig, cellGroupConfig);
	ASN_STRUCT_FREE(asn_DEF_RRCReconfiguration, (void*)rrcReconfiguration);
	return rval.code;	
}
