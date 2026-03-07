#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

/* In this example code we will see how to create an array in stack or in heap */

int main()
{
	int A[5] = {2,4,6,8,10};// this is static array created inside the stack

	int *p;// this is pointer to create an dynamic array inside the heap memory

//	p = (int *)malloc(5*sizeof(int));// this is memory allocation inside the heap with help of the pointer 

	p = new int [5];// this will also allocate the memory inside the heap but this is way followed in c++

	/* below is the initialization of the array element */

	p[0] = 3;
	p[1] = 5;
	p[2] = 7;
	p[3] = 9;
	p[4] = 11;
	

	cout<<"This Array is created inside the heap"<<endl;
	for(int i = 0; i < 5; i++)
		cout<<p[i]<<endl;
cout<<endl;

	cout<<"This Array is created inside the stack"<<endl;

	for(int i = 0; i < 5; i++)
	{
			cout<<A[i]<<endl;
	}
	return 0;
}
