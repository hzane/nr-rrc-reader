#include "nr-sp-cell-config-info.h"
#include "stdafx.h"

int DL_DCCH_CellGroupConfig_Message_Parse(unsigned short MsgID, unsigned char* pRawData,int nNumber,NRSpCellConfigInfo *Info);

typedef int (__cdecl *proc_t)(unsigned short MsgID, unsigned char* pRawData,int nNumber, NRSpCellConfigInfo *Info);

int main(int argc, char* argv[])
{
	NRSpCellConfigInfo * pInfoData = 0;
	unsigned char buffer[410];

	FILE *ptr = fopen("dl-dcch.dat","rb");  // r for read, b for binary

	fread(buffer,sizeof(buffer),1,ptr); // read 10 bytes to our buffer

 	DL_DCCH_CellGroupConfig_Message_Parse(16640,buffer,sizeof(buffer),pInfoData);

    fclose(ptr);
	return 0;
}
