#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int printadjmatrix(int **A,int rows)
{
	int i,j;
	cout<<"adjacency matrix representation"<<endl;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int **A,rows,edges,snode,enode,weight,i;
	char directed[4];
	cout<<"enter number of nodes in the graph"<<endl;
	cin>>rows;
	cout<<"enter number or edges"<<endl;
	cin>>edges;
	cout<<"Is graph directed or not?"<<endl;
	cin>>directed;
	A=(int**)malloc(rows*sizeof(int**));
	for(i=1;i<=rows;i++)
	{
		*(A+i)=(int*)calloc(rows,sizeof(int*));
		
	}	
	for(i=1;i<=edges;i++)
	{
		cout<<"enter the start node,end node and weight of edge"<<i<<endl;
		cin>>snode>>enode>>weight;
		if(strcmp(directed,"yes")==0)
		{
			A[snode][enode]=weight;
		}
		else
		{
			A[snode][enode]=weight;
			A[enode][snode]=weight;
		}
	}
	printadjmatrix(A,rows);
 } 
