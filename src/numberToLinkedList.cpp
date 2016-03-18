/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) 
{
	if (N < 0){
		N *= -1;
	}
	struct node* res = NULL;
	int temp = N, rem;
	if (N == 0){
		struct node* nn = (struct node*)malloc(sizeof(struct node));
		nn->num = 0;
		nn->next = NULL;
		return nn;
	}
	while (temp > 0){
		struct node* nn = (struct node*)malloc(sizeof(struct node));
		rem = temp % 10;
		nn->num = rem;
		nn->next = NULL;
		if (res == NULL){
			res = nn;
		}
		else{
			nn->next = res;
			res = nn;
		}
		temp = temp / 10;
	}
	return res;
}

