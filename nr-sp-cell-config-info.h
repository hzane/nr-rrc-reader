#pragma once

typedef struct NRSpCellConfigInfo_t
{
    long           nlocationAndBandwidth_down;
    long           locationAndBandwidth_up;
    unsigned short nPCI;       // PCI
    unsigned int   nFrequency;
    int            nabsoluteFrequencyPointA;
    int            ncarrierBandwidth;
    unsigned char  nSubcarrierSpacingCommon;
}NRSpCellConfigInfo;
