#include <stdio.h>

int main(void)
{
	int num;
	printf("input num : ");
	scanf("%d", &num);
	
	if (num > 0) {
		printf("%d is a positive\n", num);
	} else if (num == 0) {
			printf("%d is zero\n", num);
	} else {
			printf("%d is a negative\n", num);
	}
	
//	printf("%d is %s\n", num, (num > 0) ? "positive" : (num == 0) ? "zero" : "negative");
	return 0;
}
