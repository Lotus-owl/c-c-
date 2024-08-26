#include <iostream>
#include "stack.h"

int main()
{
	Stack<int> s1;
	Stack<double>	 s2(20);
	//Stack s3 = s2;
	
	//s1 = s2;
	
	for (int i = 1; i <= 10; ++i) {
		if (!s1.full()) {
			s1.push(i * 100);
		}
	}
	
	while (!s1.empty()) {
		std::cout<<s1.pop()<<std::endl;
	}
	
	return 0;
}
