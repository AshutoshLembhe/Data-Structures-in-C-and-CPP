#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

void printlist(struct node* n)
{
	while(n!=NULL)
	{
		printf("%d",n->data);
		n=n->next;
	}
}

int main()
{
	struct node* head=NULL;
	struct node* second=NULL;
	struct node* third=NULL;
	
	// allocating in heap with dynamic memory allocation
	head = (struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	
	head->data=1;
	head->next=second;
	// here next is pointer of first block pointing towards second block
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	// the print command will print the address of the head,second and third.
	printf("%d %d %d\n",head,second,third);
	
	printlist(head);
	return 0;
	
}
