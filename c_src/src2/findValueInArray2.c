#include <stdio.h>

int findValueInArray(const int *pArr, int size, int num)
{
	int i; 
	for (i = 0; i < size; ++i) {
		if (num == pArr[i])
			break;
	}
	if (i == size)
		return -1;
	else
		return i;
}

int main(void)
{
	int nums[10] = {50, 30, 100, 10, 40, 20, 60, 80, 90, 70};
	
	int num;
	printf("input num : ");
	scanf("%d", &num);
	
	int index = findValueInArray(nums, 10, num);
	
	if (index == -1) {
		printf("%d is not found.\n", num);
	} else {
		printf("%d is found. index : %d\n", num, index);
	}
	return 0;
}
