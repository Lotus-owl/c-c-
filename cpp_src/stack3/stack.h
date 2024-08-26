#ifndef STACK_H
#define STACK_H
#include "array.h"

class Stack{
private:
	static const int ARRSIZE;

	//int *pArr_;
	//int size_;
	Array pArr_;			// has-a
	int tos_;
	
	Stack(const Stack& rhs);				//can't use
	Stack& operator=(const Stack& rhs);	//can't use
	
public:
	explicit Stack(int size = ARRSIZE);
	~Stack();
	
	//Stack *operator&() {return this};
	//const Stack *operator&() const {return this};
	
	void push(int data);
	int pop();
	
	bool full() const;
	bool empty() const;
};

#endif
