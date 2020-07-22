#include<stdio.h>
void sort(int arr[10]);
void search(int arr[10]);
int main()
{
	int arr[10],n,i,j;
	printf("\n enter elements in array");
	for(i=0;i<10;i++)
	{
		printf("\n enter element %d:",i);
		scanf("%d",&arr[i]);
	}
	sort(arr);
	search(arr);
}
void sort(int arr[10])
{
	int i,j,temp;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("\n sorted array:%d",arr[i]);
	}
}
void search(int arr[10])
{
	int key,i,low,mid,high;
	printf("\n enter key to be searched:");
	scanf("%d",&key);
	low=0;
	high=9;
	mid=(low+high)/2;
	while(arr[mid]!=key)
	{
		if(key<arr[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
		mid=(low+high)/2;
	}
	if(arr[mid]==key)
	{
		printf("\n element is at %d position",mid);
	}
	else
	{
		printf("\n key not found");
	}
	/*for(i=0;i<10;i++)
	{
		if(arr[i]==key)
		{
			cnt=cnt+1;
			printf("\n the value of key is at:%d",i);
		}
		else
		{
			printf("\n key not found");
		}
	}
	printf("\n key has appeared %d times",cnt);*/
	
}
