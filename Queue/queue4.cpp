#include<iostream>
#include<stdlib.h>
using namespace std;
class Node{
  public:
  int data;
  Node *next;
};
void append(Node  **headadd,int data);
void display(Node *head);
int main()
{
  Node *head=NULL;
  int data,n,c=0;
  cout<<"Enter the number of values to be inserted:"<<endl;
  cin>>n;
  cout<<"Enter the values to be inserted in priority queue:"<<endl;
  while(c<n)
  {
    cin>>data;
    c++;
    if(data>0)
      append(&head,data);
  }

  display(head);
  }
  void append(Node **headadd,int data)
  {
    Node *temp;
 if(*headadd==NULL||data>(*headadd)->data)
 {
  temp=(Node*)malloc(sizeof(Node));
  temp->data=data;
  temp->next=*headadd;
  *headadd=temp;
 }
 else
 {
  temp=*headadd;
  while(temp!=NULL)
  {
   if(temp->data>=data &&(temp->next==NULL || temp->next->data<data))
   {
    Node*temp1=(Node*)malloc(sizeof(Node));
    temp1->data=data;
    temp1->next=temp->next;
    temp->next=temp1;
    return;
   }
   temp=temp->next;
  }
 }

  }
void display(Node *head)
{
  cout<<"The priority queue elements are:"<<endl;
  while(head!=NULL)
  {
    cout<<head->data<<" ";
    head = head->next;
}
}
