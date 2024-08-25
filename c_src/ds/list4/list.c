#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

void initList(List *plist, int eleSize)
{
	plist->ptr = malloc(sizeof(Node) /*+ eleSize*/);
	//plist->ptr->data =  ;		//dumy
	plist->ptr->next = NULL;
	plist->eleSize = eleSize;
	
}

void cleanupList(List *plist)
{
	Node *p = plist->ptr;
	while (p ) {
		Node *tmp = p;
		p = p->next;
		
		free(tmp);
	}
}

void printList(const List *plist, void (*print)(const void *))
{
	Node *p = plist->ptr->next;
	printf("[");
	while (p ) {
		//printf("%d", p->data);
		//printf("%d", p + 1);
		(*print)(p + 1);
		printf((p->next ) ? ", " : "");
		p = p->next;
	}
	printf("]\n");
}

void insertFirstNode(List *plist, const void *pData)
{
	Node *p = malloc(sizeof(Node) + plist->eleSize);
	//p->data = data;
	memcpy(p + 1, pData, plist->eleSize);
	p->next = plist->ptr->next;
	plist->ptr->next = p;
}

void insertNode(List *plist, const void *pPrevData, const void *pData)
{
	Node *p = plist->ptr->next;
	while (p ) {
		//if (p->data == prevData) {
		if (memcmp(p + 1, pPrevData, plist->eleSize == 0)) {
			break;
		}
		p = p->next;
	}
	
	if (p ) {
		//Node *p2 = malloc(sizeof(Node));
		Node *p2 = malloc(sizeof(Node) + plist->eleSize);
		//p2->data = data;
		memcpy(p2 + 1, pData, plist->eleSize);
		p2->next = p->next;
		p->next = p2;
	} else {
		//
	}
}

void deleteNode(List *plist, const void *pData)
{
	Node *p1 = plist->ptr->next;
	Node *p2 = plist->ptr;
	
	while (p1 ) {
		//if (p1->data == data)
		if (memcmp(p1 + 1, pData, plist->eleSize == 0))
			break;
		
		p1 = p1->next;
		p2 = p2->next;
	}
	
	if (p1 ) {
		p2->next = p1->next;
		free(p1);
	} else {
		//
	}
}
