/* in this program we will see a function returning a pointer to the object created in heap or pointer to the structure variable created in heap or pointer to structure */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle 
{
	int length;
	int breadth;
};

struct Rectangle *fun()
{
	struct Rectangle *p;// this pointer declaration to the structure variable 

	p = new Rectangle;// this is the memory allocation or object creation inside the heap

	p->length = 10;
	p->breadth = 15;

	return p;
}
int main()
{
	struct Rectangle *ptr = fun();
	cout<<"Length = "<<ptr->length<<endl<<"Breadth = "<<ptr->breadth<<endl;
	return 0;
}
