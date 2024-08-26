#include <stdio.h>
#include"gcd.h"

int main(void)
{
	int a, b;
	printf("input 2 nums: ");
	scanf("%d %d", &a, &b);
	
	int result = gcd(a, b);
	
	printf("%d and %d gcd = %d\n", a, b, result);
	
	return 0;
}
