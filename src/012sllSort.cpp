/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	struct node* temp= (struct node*)malloc(sizeof(struct node));
	temp = head;
	int p = 0, q = 0, r = 0;
	while (temp != NULL)
	{
		if (temp->data == 0)
		{
			p++;
		}
		else if (temp->data == 1)
		{
			q++;
		}
		else if (temp->data==2)
		{
			r++;
		}
		temp = temp ->next;
	}
	temp = head;
	int i;
	for (i = 0; i < p; i++)
	{
		temp->data = 0;
		temp = temp->next;
	}
	for (; i < q+p; i++)
	{
		temp->data = 1;
		temp = temp->next;
	}
	for (; i < r+p+q; i++)
	{
		temp->data = 2;
		temp = temp->next;
	}
	head = temp;
	
}