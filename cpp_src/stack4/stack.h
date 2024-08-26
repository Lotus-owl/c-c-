#ifndef STACK_H
#define STACK_H
#include "array.h"

template <typename T>
class Stack{
private:
	static const int ARRSIZE;

	Array<T> pArr_;			// has-a
	T tos_;
	
	Stack(const Stack<T>& rhs);				//can't use
	Stack<T>& operator=(const Stack<T>& rhs);	//can't use
	
public:
	explicit Stack(int size = ARRSIZE);
	~Stack();
	
	//Stack<T> *operator&() {return this};
	//const Stack<T> *operator&() const {return this};
	
	void push(const T& data);
	const T pop();
	
	bool full() const;
	bool empty() const;
};

#include <cstdlib>
#include <cassert>

template <typename T>
const int Stack<T>::ARRSIZE = 100;

template <typename T>
Stack<T>::Stack(int size)
: pArr_(size), tos_(0)
{

}

template <typename T>
Stack<T>::~Stack()
{
	//pArr_.~Array is automatically called
}

template <typename T>
void Stack<T>::push(const T& data)
{
	assert(!this->full());
	
	pArr_[tos_] = data;
	++tos_;
}

template <typename T>
const T Stack<T>::pop()
{
	assert(!this->empty());
	
	--tos_;
	return pArr_[tos_];
}

template <typename T>
bool Stack<T>::full() const
{
	return tos_ == pArr_.size();
}

template <typename T>
bool Stack<T>::empty() const
{
	return tos_ == 0;
}

#endif
