#include <cstdlib>
#include <cassert>
#include "stack.h"

const int Stack::ARRSIZE = 100;

Stack::Stack(int size)
: pArr_(new int[size]), size_(size), tos_(0)
{
	assert(pArr_);
}

Stack::~Stack()
{
	delete [] pArr_;
}

void Stack::push(int data)
{
	assert(!this->full());
	
	pArr_[tos_] = data;
	++tos_;
}

int Stack::pop()
{
	assert(!this->empty());
	
	--tos_;
	return pArr_[tos_];
}

bool Stack::full() const
{
	return tos_ == size_;
}

bool Stack::empty() const
{
	return tos_ == 0;
}
