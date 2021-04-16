#include<iostream>
#include<stdlib.h>
using namespace std;
class Node
{
  public:
  int data;
  Node *next;
};

 

 Node *head = NULL;
void append(int data)
{
   Node* newnode = new Node(); 
  newnode->data = data; 
  newnode->next = head; 
  head = newnode;
}

 

void display()
{
  cout<<"Queue elements are:"<<endl;
  while(head != NULL)
  {
    cout<<head -> data<<" ";
    head = head -> next;
  }
}
void reverse()
{
        Node* current = head; 
        Node *prev = NULL;
        Node *temp = NULL; 
        while (current != NULL) 
        { 
            temp = current->next; 
            current->next = prev; 
            prev = current; 
            current = temp; 
        } 
        head = prev; 
}

 

int main()
{
  int n,data;
  cout<<"Enter the size of stack:"<<endl;
  cin>>n;
  cout<<"Enter the stack values:"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>data;
    if(data>0)
      append(data);
  }
  reverse();
  display();
  return 0;
}
