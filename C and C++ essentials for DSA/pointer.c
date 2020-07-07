#include<stdio.h>

int main()
{
	int a=10;
	int *p; // pointer declared
	p=&a; //storing address of a in p
	
	printf("%d\n",a);
	printf("%d",*p); // printing the value at the address.
	
	// dynamic memory allocation
	int *m;
	m=(int *)malloc(5*sizeof(int)); //typecasting
	// now m is allocated 10 bytes in the main memory.
}
