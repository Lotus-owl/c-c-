#include <iostream>
#include "safeArray.h"

int main()
{

	SafeArray sArr1;
	SafeArray sArr2(10);		// SafeArray sArr2 = 10 X
	int nums[] = {1, 2, 3, 4, 5};
	SafeArray sArr3(nums, 5);
	const SafeArray sArr4 = sArr3;
	
	sArr1 = sArr3;
	
	sArr1 == sArr3;
	
	for(int i = 0; i < sArr3.size(); ++i){
		std::cout<<sArr3[i]<<std::endl;
	}
	
	Array arr1(10);
	SafeArray arr2(10);
	
	//arr1[10] = 1;			// boundary error!
	//arr2[10] = 1;
	
	Array *pArr = new SafeArray(sArr3);
	(*pArr)[10] = 1;
	
	delete pArr;
	return 0;
}
