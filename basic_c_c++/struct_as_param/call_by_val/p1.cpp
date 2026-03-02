/*In this program we will see the structure as a parameter of the function with call by value */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

void fun(struct Rectangle r1)// function definition taking structure as a parameter
{
	cout<<"Length = "<<r1.length<<endl<<"Breadth = "<<r1.breadth<<endl;
}
int main()
{
	struct Rectangle r = {10,5};

	fun(r);// this is the function call and function is taking stucture variable as a parameter means we are passing a stucture as a parameter
	
	printf("length = %d\nbreadth = %d\n", r.length,r.breadth);
	
	return 0;	
}
