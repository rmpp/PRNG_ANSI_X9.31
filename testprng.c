#include "prng.h"
#include "time.h"
#include <sys/types.h>
#include <inttypes.h>


int main(int argc, const char *argv[])
{  
	int e = 0;
	
	unsigned char sourceKey[] = 
	{ 
	0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6,
	0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c};
	
	generatePRN(sourceKey);
	
	/*
	printf(" PRN \n");
	for(e = 0; e < BLOCK_SIZE; e++){
		printf("%02x, ",sourceKey[e] & 0xff);
		}
	*/
	
	//GET A random number just using the first 2 bytes
	
	char hexString[256];
	sprintf(hexString, "%02X", sourceKey[0]);
	
	int random;
	random = strtol(hexString,NULL,16) * 256;
	
	sprintf(hexString, "%02X", sourceKey[1]);
	
	random = random + strtol(hexString,NULL,16);
		
	printf (" %d.\n",random);
	
	return 0;
}


