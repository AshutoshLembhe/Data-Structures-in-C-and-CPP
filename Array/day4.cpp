// Two pointer technique
#include<iostream>
using namespace std;

int isPairsum(int a[],int N,int X)
{
	int i=0;
	int j=N-1;
	while(i<j)
	{
		if(a[i]+a[j]==X)
		{
			return 1;
		}
		else if(a[i]+a[j]<X)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
		return 0;
}
int main()
{
	int arr[] = { 3, 5, 9, 2, 8, 10, 11 };
	int val=17;
	int arrsize=*(&arr+1)-arr;
	cout << (bool)isPairsum(arr, arrsize, val);
 
    return 0;
}
