#include<stdio.h>
//Pass by value
void swap(int x,int y)
{
	int temp;
	temp=x;
	y=x;
	y=temp;
}
//Call by address
void swap1(int *x,int *y)
{
	int *temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
//call by reference
void swap2(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a,b;
	a=10;
	b=20;
	swap(a,b);
	swap1(&a,&b);
	swap2(a,b);
	printf("a=%d , b=%d\n",a,b);
	printf("a1=%d , b1=%d\n",a,b);
	printf("a2=%d , b2=%d",a,b);
}

