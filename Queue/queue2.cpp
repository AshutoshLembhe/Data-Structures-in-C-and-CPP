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
  int data;
  do
  {
    cin>>data;
    if(data>0)
      append(&head,data);
  }while(data>0);

  display(head);
  }
  void append(Node **headadd,int data)
  {
    Node *temp,*newnode;
    temp=*headadd;
    newnode=(Node*)malloc(sizeof(Node));
    newnode->data=data;
    newnode->next=NULL;
    if(*headadd==NULL)
      *headadd=newnode;
    else{
      while(temp->next!=NULL){
        temp=temp->next;
  }
      temp->next=newnode;
}
  }
void display(Node *head)
{
  while(head!=NULL)
  {
    cout<<head->data<<" ";
    head = head->next;
}
}
