#include "CellGroupConfig.h"
#include "DL-CCCH-Message.h"
#include "DL-DCCH-Message.h"
#include "PCCH-Message.h"
#include "UL-CCCH-Message.h"
#include "UL-DCCH-Message.h"
#include "nr-sp-cell-config-info.h"

unsigned MsgGetBit_NR(unsigned Value,unsigned StartBit,unsigned EndBit)
{
	unsigned a,b,c,d;
	d = EndBit-StartBit;
	c = Value>>StartBit;
	a = ~(~0<<(d+1));
	b = c&a;
	return b;
}

int DL_DCCH_UplinkConfigCommon_Message_Parse_Info(unsigned char* pRawData,int nNumber,NRSpCellConfigInfo *Info)
{
	UplinkConfigCommon_t * uplinkConfigCommon = 0;
	asn_dec_rval_t rval1 = uper_decode(0,&asn_DEF_UplinkConfigCommon,(void **)&uplinkConfigCommon,pRawData,nNumber,0,0);
	
	if ( rval1.code != RC_FAIL
             &&  uplinkConfigCommon->frequencyInfoUL  != NULL
	 &&  uplinkConfigCommon->initialUplinkBWP != NULL		
	 &&  uplinkConfigCommon->initialUplinkBWP->rach_ConfigCommon  != NULL
	 &&  uplinkConfigCommon->initialUplinkBWP->pusch_ConfigCommon != NULL
	 &&  uplinkConfigCommon->initialUplinkBWP->pucch_ConfigCommon != NULL
	)   
	{
		long locationAndBandwidth = uplinkConfigCommon->initialUplinkBWP->genericParameters.locationAndBandwidth;
		Info->locationAndBandwidth_up = locationAndBandwidth;
	}
	ASN_STRUCT_FREE(asn_DEF_UplinkConfigCommon, (void*)uplinkConfigCommon);
	return rval1.code;
}



int DL_DCCH_CellGroupConfig_Message_Parse_Info(unsigned char* pRawData,int nNumber,NRSpCellConfigInfo *Info)
{
	CellGroupConfig_t *ue_ellGroupConfig_t = 0;

	asn_dec_rval_t rval1 = uper_decode_complete(0,&asn_DEF_CellGroupConfig,(void **)&ue_ellGroupConfig_t,pRawData,nNumber);
	if (  rval1.code != RC_FAIL && ue_ellGroupConfig_t->spCellConfig != NULL
	&& ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync != NULL
	&& ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon != NULL
	&& ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->downlinkConfigCommon != NULL
	&& ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->downlinkConfigCommon->initialDownlinkBWP != NULL)
	{
		long locationAndBandwidth = ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->downlinkConfigCommon->initialDownlinkBWP->genericParameters.locationAndBandwidth;
		Info->nlocationAndBandwidth_down = locationAndBandwidth;
	}

	if (  rval1.code != RC_FAIL && ue_ellGroupConfig_t->spCellConfig != NULL
		&& ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync != NULL
		&& ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon != NULL
	   )
	{
		if (ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->physCellId != NULL)
			Info->nPCI = *ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->physCellId;

		if (	ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->downlinkConfigCommon != NULL
			&& ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->downlinkConfigCommon->frequencyInfoDL != NULL
			)
		{
			int ncount = 0;
			if (ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->downlinkConfigCommon->frequencyInfoDL->absoluteFrequencySSB != NULL)
				Info->nFrequency = *ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->downlinkConfigCommon->frequencyInfoDL->absoluteFrequencySSB;
			
			Info->nabsoluteFrequencyPointA = ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->downlinkConfigCommon->frequencyInfoDL->absoluteFrequencyPointA;

			 ncount = ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->downlinkConfigCommon->frequencyInfoDL->scs_SpecificCarrierList.list.count;
			if (ncount > 0)
			{
				// cgc->spCellConfig->reconfigurationWithSync->spCellConfigCommon->downlinkConfigCommon->frequencyInfoDL->scs_SpecificCarrierList.list.array[0]->subcarrierSpacing
				Info->ncarrierBandwidth = ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->downlinkConfigCommon->frequencyInfoDL->scs_SpecificCarrierList.list.array[0]->carrierBandwidth;
				if (ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->downlinkConfigCommon->frequencyInfoDL->scs_SpecificCarrierList.list.array[0]->subcarrierSpacing > 0)
					Info->nSubcarrierSpacingCommon = (ue_ellGroupConfig_t->spCellConfig
					->reconfigurationWithSync
					->spCellConfigCommon
					->downlinkConfigCommon
					->frequencyInfoDL
					->scs_SpecificCarrierList.list.array[0]
				->subcarrierSpacing);
			}
		}
	}

	if (  rval1.code !=RC_FAIL && ue_ellGroupConfig_t->spCellConfig != NULL
	&& ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync != NULL
	&& ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon != NULL
	&& ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->uplinkConfigCommon != NULL
	&& ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->uplinkConfigCommon->initialUplinkBWP != NULL)
	{
		long locationAndBandwidth = ue_ellGroupConfig_t->spCellConfig->reconfigurationWithSync->spCellConfigCommon->uplinkConfigCommon->initialUplinkBWP->genericParameters.locationAndBandwidth;
		Info->locationAndBandwidth_up = locationAndBandwidth;
	}				
	ASN_STRUCT_FREE(asn_DEF_CellGroupConfig, (void*)ue_ellGroupConfig_t);
	return rval1.code;
}



int DL_DCCH_CellGroupConfig_Message_Parse(unsigned short MsgID, unsigned char* pRawData,int nNumber,NRSpCellConfigInfo *Info)
{
	RRCReconfiguration_t *rrcReconfiguration_t = 0;
	asn_dec_rval_t rval = uper_decode_complete(0,&asn_DEF_RRCReconfiguration,(void **)&rrcReconfiguration_t,pRawData,nNumber);	
	if (rval.code != RC_FAIL &&  rrcReconfiguration_t->criticalExtensions.present == RRCReconfiguration__criticalExtensions_PR_rrcReconfiguration)
	{
		if (rrcReconfiguration_t->criticalExtensions.choice.rrcReconfiguration->secondaryCellGroup != NULL)
		{
			OCTET_STRING_t *pData = (OCTET_STRING_t*)rrcReconfiguration_t->criticalExtensions.choice.rrcReconfiguration->secondaryCellGroup;
			if (pData->size > 0 )
			{					
				DL_DCCH_CellGroupConfig_Message_Parse_Info(pData->buf,pData->size,Info);				
			}
		}
	}

	ASN_STRUCT_FREE(asn_DEF_RRCReconfiguration, (void*)rrcReconfiguration_t);
	return rval.code;	
}
