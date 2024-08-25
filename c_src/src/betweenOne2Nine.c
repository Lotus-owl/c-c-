#include <stdio.h>

int main(void)
{
	int num;
	printf("input num : ");
	scanf("%d", &num);
	
	//int re = (1 <= num <= 9);
	int re = (1 <= num && num <= 9);
	
	printf("%d is in [1, 9] : %d\n", num, re);
	return 0;
}
