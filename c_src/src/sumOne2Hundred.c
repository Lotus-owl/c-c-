#include <stdio.h>

int main(void)
{
	int i = 1;
	
	int sum = 0;
	
	while (i <= 100) {
//		sum = sum + i;
//		++i;
		sum = sum + i + i + 1;
		i = i + 2;		//loop spread
	}
	
	printf("sum [1, 100] : %d\n", sum);
	return 0;
}
