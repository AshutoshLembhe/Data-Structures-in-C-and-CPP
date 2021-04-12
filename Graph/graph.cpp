#include<iostream>
#include<list>
using namespace std;
int displayadjlist(list<int>adj_list[],int v,int u)
{
	int i;
	for(i=0;i<v;i++)
	{
		cout<<i<<"->";
	}
	list<int>::iterator it;
	for(it=adj_list[i].begin();it!=adj_list[i].end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}
int add_edge(list<int>adj_list[v],int u)
{
	adj_list.push_back(v);
	adj_list.push_back(u);
}
int main()
{
	int v,e,snode,enode;
	cout<<"enter the number of vertices"<<endl;
	cin>>n;
	list<int>adj_list[v];
	cout<<"enter the number of edges"<<endl;
	cin>>e;
	for(i=0;i<rows;i++)
	{
		cout<<"enter the start node and end node"<<endl;
		cin>>snode>>enode;
		add_edge(adj_list,snode,enode);
		
	}
	cout<<"adjaceny list"<<endl;
	displayadjlist(adj_list,v);
}
