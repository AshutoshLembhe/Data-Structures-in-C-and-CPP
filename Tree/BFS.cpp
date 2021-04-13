#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node*left,*right;
}*root;
struct node*newnode(int item)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct node*insert(struct node*node, int data)
{
	if(node==NULL)
	{
		return newnode(data);
	}
	if(data<node->data)
	{
		node->left=insert(node->left,data);
	}
	else if(data>node->data)
	{
		node->right=insert(node->right,data);	
	}
	return node;
}
void display_inorder(struct node*root)
{
	if(root!=NULL)
	{
		display_inorder(root->left);
		cout<<root->data<<" ";
		display_inorder(root->right);
	}
}

int main()
{
	int data;
	int n; //number of elements to be inserted.
	cout<<"Enter n"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the data"<<endl;
		cin>>data;		
	}
	root=insert(root,data);
	cout<<"inorder"<<endl;
	display_inorder(root); //left , right
	return 0;
}
