#include<bits/stdc++.h>
using namespace std;

class node{
	public:
	int data;
	node* next;
};

void push(node** head_ref,int new_data)
{
	// allocating nnew_node on heap of node.
	node* new_node=new node();
	
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}

//iterative method
int getcount(node* head)
{
	int count=0;
	node* current=head;
	while(current!=NULL)
	{
		count++;
		current=current->next;
	}
	return count;
}

//recursive method
int getcount1(node* head)
{
	if(head==NULL)
	{
		return 0;
	}
	
	return 1+getcount1(head->next);
}
int main()
{
	node* head =NULL;
	//1->2->1->3->1
	push(&head,1);
	push(&head,2);
	push(&head,1);
	push(&head,3);
	push(&head,1);
	
	cout<<getcount(head)<<endl;
	cout<<getcount1(head)<<endl;
	return 0;
}
