#include <stdio.h>

int main(void)
{
	int fahr;
	//int celsius;
	
	fahr = 100;
	//celsius = (fahr -32) *100 *5 /9;
	
	int celsius1000 = 1000 * (fahr -32) * 5 /9;
	
	int left;
	int right;
	
	left = celsius1000 /1000;
	right = (celsius1000 -(left*1000) +5)/10;
	
	printf("fahr: %d ---> celsius: %d.%d\n", fahr, left, right);
	//printf("fahr: %d ---> celsius: %d.%d\n", fahr, celsius/100, celsius+1-(celsius/100*100));
	
	return 0;
}
