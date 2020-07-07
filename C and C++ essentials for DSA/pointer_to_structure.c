#include<stdio.h>

struct rectangle{
	int l;
	int w;
};

int main()
{
	struct rectangle r= {10,5};
	struct rectangle *p=&r; // storing the address in p pointer.
	r.l=15; // noraml variable dot operator.
	printf("%d\n",r.l);
	(*p).l=20; // changing value of lenght using address.
	// pointer variable the above or down arrow one operator
	printf("%d\n",r.l);
	p->l=30;
	printf("%d\n",r.l);
	
	// dynamic object
	
	struct rectangle *m;
	m=(struct rectangle *)malloc(sizeof(struct rectangle));
	m->l=50;
	m->w=30;
	printf("%d \n %d",m->l,m->w);
}
