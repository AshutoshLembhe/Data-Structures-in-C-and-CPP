#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
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
struct node*insert(struct node*node,int data)
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
void display_preorder(struct node*root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        display_preorder(root->left);
        display_preorder(root->right);
    }
}
void display_postorder(struct node*root)
{
    if(root!=NULL)
    {
        display_postorder(root->left);
        display_postorder(root->right);
        cout<<root->data<<" ";
    }
}
//to find height
int height(struct node*node)
{
    if(node==NULL)
    {
        return 0;
    }
    else
    {
        int lh=height(node->left);
        int rh=height(node->right);
        if(lh>rh)
        {
            return (lh+1);
        }
        else{
            return(rh+1);
        }
    }
}
//print the datas levelwise
void print_level(struct node*root,int level)//(r,1)(r,2)(r,1)(r,3)(r,2)(r,1)(r,2)(r,1)
{
    if(root==NULL)
    {
        return;
    }
    if(level==1)
    {
        cout<<root->data<<" ";
    }
    else{
        print_level(root->left,level-1);//(r,1)(r,2)(r,1)
        print_level(root->right,level-1);//(r,1)(r,2)(r,1)
    }
}
void display_levelorder(struct node*root)
{
    int h=height(root);//h=3
    for(int i=1;i<=h;i++)//i=1,i=2,i=3
    {
        print_level(root,i);//(r,1)(r,2)(r,3)
    }
}
int main()
{
    int data;
    int n;//n-no of elements to be inserted
    cout<<"enter n:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the data"<<endl;
       cin>>data;
    root=insert(root,data);
    }
    cout<<"inorder:";
    display_inorder(root);
    cout<<endl;
    cout<<"preoder:";
    display_preorder(root);
    cout<<endl;
    cout<<"postorder:";
    display_postorder(root);
    cout<<endl;
    cout<<"levelorder:";
    display_levelorder(root);
    cout<<endl;
    return 0;
}
