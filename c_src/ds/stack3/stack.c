#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void initStack(Stack *ps)
{
	(*ps).tos = 0;
}

void push(Stack *ps, int data)
{
	if(ps->tos == ARRSIZE) {
		fprintf(stderr, "stack is full\n");
		exit(1);
	}
	
	//stack[tos] = data;
	//++tos;
	
	//s.array[s.tos] = data;
	//++s.tos;
	
	(*ps).array[ps->tos] = data;
	++ps->tos;
}

int pop(Stack *ps)
{
	if(ps->tos == 0) {
		fprintf(stderr, "stack is empty\n");
		exit(2);
	}
	
	//--s.tos;
	//return s.array[s.tos];
	
	--ps->tos;
	return ps->array[ps->tos];
}

