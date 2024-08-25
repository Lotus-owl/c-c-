#include <stdio.h>

int main(void)
{
	int nums[10] = {50, 30, 100, 10, 40, 20, 60, 80, 90, 70};
	
	for(int i = 9; i >= 1; --i){
		for(int j = 0; j < i; ++j){
			if(nums[j] > nums[j+1]){
			int tmp = nums[j];
			nums[j] = nums[j+1];
			nums[j+1] = tmp;
			}
		}
	}
	
	for(int i = 0; i < 10; ++i){
		printf("%d ", nums[i]);
	}
	printf("\n");
	return 0;
}
