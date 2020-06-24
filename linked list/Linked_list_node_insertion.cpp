#include<bits/stdc++.h>
using namespace std;

class node{
	public:
	int data;
	node* next;
};
// node insertion at front
void push(node** head_ref,int new_data)
{
	node* new_node=new node();
	
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
// node between two given nodes
void insertafter(node* prev_node, int new_data)
{
	if(prev_node==NULL)
	{
		printf("the previos node cannot be null");
		return;
	}
	node* new_node=new node;
	new_node->data=new_data;
	new_node->next=prev_node->next;
	prev_node->next=new_node;
}
// node insertion at last
void append(node** head_ref,int new_data)
{
	node* new_node=new node;
	node *last = *head_ref; 
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
void printlist(node* n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main()
{
	node* head=NULL;
	append(&head,6);
	// insertion at head
	push(&head,7);
	// inserting another element in the head
	push(&head,1);
	// insert at last before null
	append(&head,4);
	// insert in between the linked list
	insertafter(head->next,8);
	cout<<"\n Created Linked list is: "<<endl;; 
 	printlist(head); 
  
  	return 0; 
}
