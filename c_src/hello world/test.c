#include <stdio.h>

int main(void)
{
	unsigned char result = 0x56 & 0x0F;
	printf("0x%02x\n", result);
	
	return 0;
}
