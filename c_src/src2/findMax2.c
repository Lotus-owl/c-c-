#include <stdio.h>

int findMax(const int *pArr, int size)
{
	int max = pArr[0]; 
	for (int i = 1; i < size; ++i) {
		if (max < pArr[i]) {
			max = pArr[i];
		}
	}
	return max;
}

int main(void)
{
	int nums[10] = {50, 30, 100, 10, 40, 20, 60, 80, 90, 70};
	
	int max = findMax(nums, 10);
	
	printf("max: %d\n", max);
	return 0;
}
