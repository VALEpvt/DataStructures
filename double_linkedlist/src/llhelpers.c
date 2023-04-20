#include "linkedlist.h"



dllnode* dllAddNode(dllnode* HEAD) {
		/* Input Validations */
		if(HEAD == NULL) {
				printf("List is Empty, creating the first node...\n");
				HEAD = (dllnode*) malloc(sizeof(dllnode));
				printf("Enter data to the node:\n");
				scanf("%d", &(HEAD->data));
				HEAD->next = NULL;
				HEAD->pre = NULL;
				return HEAD;
		}

	 dllnode* newNode = (dllnode*) malloc(sizeof(dllnode));
		printf("Enter data to the node:\n");
		scanf("%d", &(newNode->data));
		newNode->next = HEAD;
  HEAD->pre = newNode;
  HEAD = newNode;

		return HEAD;
}

dllnode* dllDelNode(dllnode* HEAD, int delData) {
		if(HEAD == NULL) {
				printf("Cannot delete an empty List.\n");
				return NULL;
		}
		dllnode* rmNode = HEAD;
		if(delData == rmNode->data) {
				HEAD = rmNode->next;
   // rmNode->next->pre = NULL;
				printf("Deleting the node\n");
				free(rmNode);
				rmNode = NULL;
				return HEAD;
		}


		while(rmNode->next != NULL && rmNode->pre != NULL) {
				if(delData == rmNode->next->data) {
						dllnode* tmpNode = rmNode->next;
						rmNode->next = rmNode->next->next;
						tmpNode->next->pre = rmNode;
						printf("Deleting the node\n");
						free(tmpNode);
						tmpNode = NULL;
						break;
				}
				rmNode = rmNode->next;
		}
		return HEAD;

		while(rmNode->next = NULL) {
				if(delData == rmNode->data) {
						dllnode* tmpNode = rmNode->pre;
					 tmpNode->next = NULL;;
						printf("Deleting the node\n");
						free(rmNode);
						rmNode = NULL;
						break;
				}
				rmNode = rmNode->next;
		}
		return HEAD;
}

void dllPrintNode(dllnode* HEAD) {
		dllnode* prtNode = HEAD;
		while(prtNode != NULL) {
			printf("%p %p %d %p\t",prtNode,prtNode->pre,prtNode->data,prtNode->next);
//				printf("%d \t",prtNode->data);
				prtNode = prtNode->next;
		}
		printf("\n");
}
