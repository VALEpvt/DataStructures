#ifndef __LINKEDLIST_H_
#define __LINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>

enum dllnodeEnum {
		ADDNODE = 1,
		DELNODE,
		PRTNODE,
		EXIT
};

typedef struct node {
		int data; // This unique Data
		struct node* next; // Pointer to next node
		struct node* pre; // Pointer to previous node
}dllnode;


/* TODO: Add function declarations whenever they are created */

dllnode* dllAddNode(dllnode* HEAD);
dllnode* dllDelNode(dllnode* HEAD, int delData);
void dllPrintNode(dllnode* HEAD);


#endif

