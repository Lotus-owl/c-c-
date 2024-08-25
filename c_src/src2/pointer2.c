#include <stdio.h>

int main(void)
{
	int num;
	int nums[5];
	
	int *p;
	p = NULL;
	p = &num;
	p = &nums[2];
	
	*p = 100;
	
	printf("*p : %d\n", *p);
	
	return 0;
}
