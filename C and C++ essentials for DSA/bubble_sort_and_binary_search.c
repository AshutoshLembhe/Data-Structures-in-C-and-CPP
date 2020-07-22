//bubble sort

#include<stdio.h>
int main()
{
	int i,j,arr[10],t;
	printf("\n enter elements:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("Array:%d\n",arr[i]);
	}
	//write function for line 17 to 28. 
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)//comparing next element with ith element.
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("sorted array=%d\n",arr[i]);
	}
	//binary search
	int key,low,high,mid;
	printf("\n enter key:");
	scanf("%d",&key);
	low=0;
	high=9;
	mid=(low+high)/2;
	while((arr[mid]!=key)&&(low<=high))
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
		printf("\n element not found");
	}
}
