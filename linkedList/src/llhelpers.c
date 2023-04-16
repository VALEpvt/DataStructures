#include "linkedlist.h"



llnode* llAddNode(llnode* HEAD) {
		/* Input Validations */
		if(HEAD == NULL) {
				printf("List is Empty, creating the first node...\n");
				HEAD = (llnode*) malloc(sizeof(llnode));
				printf("Enter data to the node:\n");
				scanf("%d", &(HEAD->data));
				HEAD->next = NULL;
				return HEAD;
		}

		llnode* newNode = (llnode*) malloc(sizeof(llnode));
		printf("Enter data to the node:\n");
		scanf("%d", &(newNode->data));
		newNode->next = HEAD;
		HEAD = newNode;

		return HEAD;
}

llnode* llDelNode(llnode* HEAD, int delData) {
		if(HEAD == NULL) {
				printf("Cannot delete an empty List.\n");
				return NULL;
		}
		llnode* rmNode = HEAD;
		if(delData == rmNode->data) {
				HEAD = rmNode->next;
				printf("Deleting the node\n");
				free(rmNode);
				rmNode = NULL;
				return HEAD;
		}


		while(rmNode->next != NULL) {
				if(delData == rmNode->next->data) {
						llnode* tmpNode = rmNode->next;
						rmNode->next = rmNode->next->next;
						printf("Deleting the node\n");
						free(tmpNode);
						tmpNode = NULL;
						break;
				}
				rmNode = rmNode->next;
		}
		return HEAD;
}

void llPrintNode(llnode* HEAD) {
		llnode* prtNode = HEAD;
		while(prtNode != NULL) {
				printf("%d\t",prtNode->data);
				prtNode = prtNode->next;
		}
		printf("\n");
}
