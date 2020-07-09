#include<stdio.h>
struct rectangle{
	int l;
	int b;
};
int area(struct rectangle r1)// passing structure as parameter.
{
	r1.l++;
	r1.b++;	
	return r1.l*r1.b;
}
// call by address
void changel(struct rectangle *p,int l)
{
	p->l=20;
}
int main()
{
	struct rectangle r={10,5};
	printf("%d\n",area(r));
	changel(&r,30);
	printf("%d",r.l);
}
