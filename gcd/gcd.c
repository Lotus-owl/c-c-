#include <stdio.h>
#include"gcd.h"

/*int gcd(int a, int b)
{
	int result = -1;
	int min;
	
	if (a < b) {
		min = a;
	} else {
		min = b;
	}
	
	for (int i = 1; i <= min; ++i) {
		if (a % i == 0 && b %i == 0) {
			result = i;
		}
	}
	
	return result;
}	*/

int gcd(int a, int b)
{
	int remain = a % b;
	while (remain != 0) {
		a = b;
		b = remain;
		
		remain = a % b;
	}
	
	return b;
}
