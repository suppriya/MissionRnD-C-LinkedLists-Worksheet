/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>

struct node {
	int num;
	struct node *next;
};


struct node * removeEveryKthNode(struct node *head, int K) {
	if (K > 1)
	{
		struct node* temp;
		struct node* pre;
		temp = head;
		int l = 0;
		while (temp != NULL)

		{
			//createList(12345678), 3), 124578
			int x = temp->num;
			l++;
			if (l%K == 0)
			{

				pre->next = temp->next;
			}
			pre = temp;
			temp = temp->next;
		}
		return head;
	}
    return NULL;
}