/*In this program we will see the function returning the arry */

#include<iostream>
#include<stdio.h>

using namespace std;

int *fun(int size)
{

	int *p;
	p = new int[size];// this the creation of the array inside the heap inside the function 
	
	for(int i = 0; i <= size; i++)
		p[i] = i+1;
	return p;
}

int main()
{
	int *ptr;
	int sz = 5;

	ptr = fun(sz);
	for(int i = 0; i <= sz; i++)
	cout<<ptr[i]<<endl;

	return 0;
	
}
