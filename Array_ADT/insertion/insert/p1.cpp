#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
/* In this example code we will see how to insert at given index */

struct Array
{
	int A[10];
	
	int size;

	int length;
};

void Display( struct Array arr)
{
	int i;
	for(i = 0; i <arr.length; i++)
		cout<<arr.A[i]<<" ";
}
void insert( struct Array *arr, int index, int x)
{
	/* first we will check the space inside the array */
	if(index >= 0 && index <= arr->length)
	{
	for(int i = arr->length; i > index; i--)	
		arr->A[i] = arr->A[i-1];//this is the shifting of the element 
	
		arr->A[index] = x; // this is insetion after finding the correct position

		arr->length++;
	}
}
int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};

	insert(&arr,4,10);
	Display(arr);
	cout<<endl;
	return 0;
}
