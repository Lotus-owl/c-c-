#ifndef QUEUE_H
#define QUEUE_H

#define ARRSIZE 100

typedef struct{
	int array[ARRSIZE];
	int front;
	int rear;
} Queue;

void initQueue(Queue *pq);

void push(Queue *pq, int data);
int pop(Queue *pq);

#endif
