#include "stdafx.h"

int PERDecodeRRCReconfiguration(unsigned short MsgID, unsigned char* pRawData,int nNumber);

int main(int argc, char* argv[])
{
	unsigned char buffer[410];
    const char* fn = "dl-dcch.dat";
    if (argc>1)
        fn = argv[1];

	FILE *ptr = fopen(fn,"rb");  // r for read, b for binary
    if (!ptr) return -1;

	fread(buffer,sizeof(buffer),1,ptr); // read 10 bytes to our buffer

    PERDecodeRRCReconfiguration(16640, buffer, sizeof(buffer) );


    fclose(ptr);
	return 0;
}
