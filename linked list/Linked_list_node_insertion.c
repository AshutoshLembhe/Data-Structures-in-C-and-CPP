#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};
// node insertion at front
void push(struct node** head_ref,int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
// node between two given nodes
void insertafter(struct node* prev_node, int new_data)
{
	if(prev_node==NULL)
	{
		printf("the previos node cannot be null");
		return;
	}
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=prev_node->next;
	prev_node->next=new_node;
}
// node insertion at last
void append(struct node** head_ref,int new_data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	struct node *last = *head_ref; 
	new_node->data=new_data;
	
	//making next node null as it will be last
	new_node->next=NULL;
	//If the Linked List is empty, then make the new node as head 
	if(*head_ref==NULL)
	{
		*head_ref=new_node;
		return;
	}
	
	// traverse till last node;
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=new_node;
	return;
}
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
	append(&head,6);
	// insertion at head
	push(&head,7);
	// inserting another element in the head
	push(&head,1);
	// insert at last before null
	append(&head,4);
	// insert in between the linked list
	insertafter(head->next,8);
	printf("\n Created Linked list is: "); 
 	printlist(head); 
  
  	return 0; 
}
