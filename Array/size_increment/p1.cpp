#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

/* In this example code we will see the how we can increse the size of the array when the array is created inside the heap */


int main()
{
	int *p,*q;
	
	int *a,*b;
	p = (int *)malloc(5*sizeof(int));// this is the array creation inside the heap memory and the size of the memory can not be increased

	a = new int[5];

	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	p[3] = 4;
	p[4] = 5;
/* now we to have increased size of array we are allocating the contiguous memory block with help of another pointer */
	q =(int*)malloc(10*sizeof(int));

	for(int i = 0; i < 5; i++)
		q[i] = p[i];// this is copying the all the element of p to q

		free (p);// after copying just free the p
		
		p = q;//now assign q to p
	
		q = NULL;

	for(int i = 0; i < 10; i++ )

	printf("%d\n",p[i]);

	cout<<endl;

// given below is the initialization of the array is created inside the heap using c++ syntax
		a[0] = 9;
		a[1] = 8;
		a[2] = 7;
		a[3] = 6;
		a[4] = 10;

/* Below we are giving the example of the extended memory arry by using pointer b */

		b = new int [10];
	
		for(int i = 0; i < 5; i++)
			b[i] = a[i];// copying the value from a to b

			delete []a;

			a = b;// assigning b to a 

			b = NULL;

for(int i = 0; i < 10; i++)
	cout<<a[i]<<endl;

	return 0;

}
