/* In this program we will see the function taking structure as a parameter with call by address */
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle 
{
	int length;
	int breadth;
};

void fun(struct Rectangle *p)
{
	p->length = 20;//this change in the length will be reflected in the actual parameter also we of call by address
	cout<<"Length = "<<p->length<<endl<<"Breadth = "<<p->breadth<<endl;
}
int main()
{
	struct Rectangle r = {10,5};

	fun(&r);//this is the function call and we are passing the address of the structure variable as the parameter of the function 

	printf("length = %d\nbreadth = %d\n",r.length,r.breadth);
	return 0;	
}
