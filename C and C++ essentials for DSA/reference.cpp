#include<stdio.h>
#include<iostream>
using namespace std;
// call by refernce.
int main()
{
	int a=10;
	int &r=a; // ampersand is for refernce and star for pointer.
	cout<<a<<endl;;
	r++; // here r has the address of a so any changes is r will lead to change in a.
	cout<<a;
}
