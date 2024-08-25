#include <stdio.h>

/*
int sum = sumArray(nums);

int sumArray(int nums[])
{
	int sum = 0;
	for (int i = 0; i < 10; ++i)	{
		sum = sum + nums[i]		// nums --- pointer(!value)
	}
	return sum;
}
*/

int sumArray(const int *pArr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum = sum + pArr[i];			// *(pArr + i)
	}
	
	return sum;
}

int main(void)
{
	int nums[10] = {50, 30, 100, 10, 40, 20, 60, 80, 90, 70};
	
	int sum = sumArray(nums, 10);		//	int sum = sumArray(&nums[0]);
	//	int sum = sumArray(nums + 5, 5);
	
	printf("sum : %d\n", sum);
	return 0;
}
