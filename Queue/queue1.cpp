#include<iostream>
#include<stdlib.h>
using namespace std;
int queue[100];
void insert(int ele,int n);
void display();
int rear = - 1;
int front = - 1;
int main()
{
    int n,i,ele;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cout<<"Insert the element in queue :\n";
      cin>>ele;
      insert(ele,n);
    }
    display();
    return 0;
}
void insert(int ele,int n)
{
    if(rear == n - 1)
    {
        cout<<"Queue is Full";
    }
    else if(front == -1 && rear == -1)
    {
        front++;
        rear++;
        queue[rear]=ele;
    }
    else
    {
        rear++;
        queue[rear] = ele;
    }
}
void display()
{
    int i;
    if((front == - 1 &&  rear == -1) ||(front>rear))
    cout<<"\nQueue is empty\n";
    else
    {
    cout<<"Queue elements are :\n";
    for(i = front; i <= rear; i++)
    cout<<queue[i]<<" ";
    }
}
