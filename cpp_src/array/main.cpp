#include <iostream>
#include "array.h"

int main()
{
	Array arr1;
	//Array arr2 = 10;
	Array arr2(10);
	
	int nums[] = {1, 2, 3, 4, 5};
	Array arr3(nums, 5);
	const Array arr4 = arr3;
	
	arr1 = arr3;
	
	if (arr1 == arr3) {
		std::cout<< "equal" <<std::endl;
	} else {
		std::cout<< "not equal" <<std::endl;
	}
	
	for (int i = 0; i < arr1.size(); ++i) {
		arr1[i] = i + 1;
	}
	
	for (int i = 0; i < arr4.size(); ++i) {
		std::cout<<arr4[i]<<", ";
	}
	
	std::cout<<std::endl;
	
	return 0;
}
