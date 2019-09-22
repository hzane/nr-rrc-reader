#include "nr-sp-cell-config-info.h"
#include "stdafx.h"

int DL_DCCH_CellGroupConfig_Message_Parse(unsigned short MsgID, unsigned char* pRawData,int nNumber,NRSpCellConfigInfo *Info);

int main(int argc, char* argv[])
{
	NRSpCellConfigInfo info;
	unsigned char buffer[410];
    const char* fn = "dl-dcch.dat";
    if (argc>1)
        fn = argv[1];

	FILE *ptr = fopen(fn,"rb");  // r for read, b for binary
    if (!ptr) return -1;

	fread(buffer,sizeof(buffer),1,ptr); // read 10 bytes to our buffer

 	DL_DCCH_CellGroupConfig_Message_Parse(16640,buffer,sizeof(buffer),&info);

    fclose(ptr);
	return 0;
}
