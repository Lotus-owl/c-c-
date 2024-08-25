#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void push(int data)
{
	queue[rear] = data;
	++rear;
}

int pop(void)
{
	int i = front;
	++front;
	
	return queue[i];
}
