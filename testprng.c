#include "prng.h"

int main(int argc, const char *argv[])
{  
	

	unsigned char sourceKey[] = 
	{ 
	0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6,
	0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c};
	
	generatePRN(sourceKey);
	
	int e;	
	printf("\n PRN \n");
	for(e = 0; e < BLOCK_SIZE; e++){
		printf("%02x, ",sourceKey[e] & 0xff);
		}

	return 0;
}
