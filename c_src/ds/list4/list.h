#ifndef LIST_H
#define LIST_H

typedef struct node {
	int data;
	struct node *next;
} Node;

typedef struct {
	Node *ptr;
	int eleSize;
} List;

void initList(List *plist, int eleSize);
void cleanupList(List *plist);

void printList(const List *plist, void (*print)(const void *));

void insertFirstNode(List *plist, const void *pData);
void insertNode(List *plist, const void *pPrevData, const void *pData);
void deleteNode(List *plist, const void *pData);

#endif
