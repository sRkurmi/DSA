#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

/* In this example code we will see the reversig of the array using the Auxilary array */

struct Array 
{
	int A[10];

	int size;

	int length;

};

void display(struct Array arr)
{
	for(int i = 0; i < arr.length; i++)
		cout<<arr.A[i]<<" ";

}
void Reverse(struct Array *arr)
{
	int *B;// this is pointer to take aux array inside the heap
	
	int i,j;
	
	B = (int *)malloc(arr->length*sizeof(int));// this is the allocation of the memrory inside the heap 

	for(i = arr->length-1,j = 0; i >= 0; i--,j++)
		B[j] = arr->A[i];// copying of the element of Array 'A' to an auxilary array 'B' in the reverse manner
	
	for(i = 0; i < arr->length; i++)
		arr->A[i] = B[i];// copying of the elememt from auxilary array 'B' to Array 'A'	

}

int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	
	Reverse(&arr);
	display(arr);
	cout<<endl;
	return 0;
}
