#include<bits/stdc++.h>
using namespace std;

class node{
	public:
	int data;
	node* next;
};
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
	node* second=NULL;
	node* third=NULL;
	
	// allocating in heap with dynamic memory allocation
	head = new node();
	second = new node();
	third = new node();
	
	head->data=1;
	head->next=second;
	// here next is pointer of first block pointing towards second block
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	printlist(head);
	return 0;
	
}
