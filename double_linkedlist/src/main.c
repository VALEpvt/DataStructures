#include "linkedlist.h"

int main(void) {
		/* HEAD node should be holded in main */
	dllnode* HEAD = NULL;
		int choice = 0;

		while(1) {
			
			printf("Choose\n1.Add a node\n2. Delete a node\n3. Print the node\n4. Exit\nEnter your choice:\n");
			scanf("%d", &choice);
			switch(choice) {
					case ADDNODE:
							HEAD = dllAddNode(HEAD);
							break;

					case DELNODE:
							printf("Enter data to delete:\n");
							int temp = 0;
							scanf("%d", &temp);
							HEAD = dllDelNode(HEAD, temp);
							break;

					case PRTNODE:
							dllPrintNode(HEAD);
							break;

					case EXIT:
							return 0;

					default:
							printf("Wrong input Try again\n");
			}
		}
		return 0;
}




