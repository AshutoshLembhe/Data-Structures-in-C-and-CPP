#include<stdio.h>

struct card{
	int face;
	int shape;
	int color;
};

int main()
{
	
	struct card c;
	c.face=1; // 1-king 2-queen 3-jack 4-Ace
	c.shape=0; // 1-hearts 2-clubs 3-diamonds 4-spade
	c.color=0; // 1-red 0-black
	
	// initializing array of struct
	struct card deck[52]={{1,0,0},{2,0,0},{3,0,0}};
	printf("%d",deck[0].face);
	printf(" %d",deck[0].shape);
	printf(" %d",deck[0].color);
}
