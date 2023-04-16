#ifndef __LINKEDLIST_H_
#define __LINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>

enum llnodeEnum {
		ADDNODE = 1,
		DELNODE,
		PRTNODE,
		EXIT
};

typedef struct node {
		int data; // This unique Data
		struct node* next; // Pointer to next node
}llnode;


/* TODO: Add function declarations whenever they are created */

llnode* llAddNode(llnode* HEAD);
llnode* llDelNode(llnode* HEAD, int delData);
void llPrintNode(llnode* HEAD);


#endif

