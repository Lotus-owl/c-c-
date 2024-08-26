#include<iostream>
#include"rational.h"

int main()
{
	Rational r1;
	Rational r2 = 3;
	Rational r3(9, 12);
	Rational r4 = r3;
	
	r1 = r3;
	
	if(r1 == r3) {
		std::cout<<"r1 and r3 are equal."<<std::endl;
	} else {
		std::cout<<"r1 and r3 are not equal."<<std::endl;
	}
	
	Rational r5, r6, r7;
	r1 = r2 + r3;
	r5 = r2 - r3;
	r6 = r2 * r3;
	r7 = r2 / r3;
	
	std::cout<<"r1: "<<r1<<std::endl;
	std::cout<<"r2: "<<r2<<std::endl;
	std::cout<<"r3: "<<r3<<std::endl;
	std::cout<<"r4: "<<r4<<std::endl;
	std::cout<<"r5: "<<r5<<std::endl;
	std::cout<<"r6: "<<r6<<std::endl;
	std::cout<<"r7: "<<r7<<std::endl;
	
	return 0;
}
