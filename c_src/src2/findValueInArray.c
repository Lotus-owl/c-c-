#include <stdio.h>

int main(void)
{
	int nums[10] = {50, 30, 100, 10, 40, 20, 60, 80, 90, 70};
	
	int num;
	printf("input num : ");
	scanf("%d", &num);
	
	int i; 
	for (i = 0; i < 10; ++i) {
		if (num == nums[i]) {
			break;
		} /*else {
		
		} */
	}
	
	if (i < 10) {
		printf("%d is found. index: %d\n", num, i);
	} else {
		printf("%d is not found.\n", num);
	}
	return 0;
}
