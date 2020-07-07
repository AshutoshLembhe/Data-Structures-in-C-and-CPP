#include<stdio.h>
// basic understanding of structure is important; 
// as the whole DSA is based upon struct;
struct rectangle{
	int length;
	int width;
};

int main()
{
	struct rectangle r;
	r.length=10;
	r.width=20;
	printf("Area of Rectangle is:\n");
	printf("%d",r.length*r.width);
}
