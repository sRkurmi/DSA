#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

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
/* In this example code we will see how to merge two array by using 3rd array */

struct Array *merge(struct Array *arr1, struct Array *arr2)
{
	int i,j,k;
	i=j=k=0;

	struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
	
	while(i < arr1->length && j < arr2->length)
	{
		if(arr1->A[i]<arr2->A[j])
			arr3->A[k++] = arr1->A[i++];// copying element from 1st array to 3rd array
		else 
		    	arr3->A[k++] = arr2->A[j++];// copying element from 2nd array to 3rd array
	}
	for(; i < arr1->length; i++)
		arr3->A[k++] = arr1->A[i];//copying the remaining element from array 1st to array 3rd
	for(; j < arr2->length; j++)
		arr3->A[k++] = arr2->A[j];//copying the remaining element from array 2nd to array 3rd

	arr3->length = arr1->length+arr2->length;// this length initialization
	arr3->size = 10;
	
	return arr3;
}
int main()
{
	struct Array arr1 = {{2,6,10,15,25},10,5};// this is the array 1st
	struct Array arr2 = {{3,4,7,18,20},10,5};// this 2nd array

	struct Array *arr3; // for 3rd we took a pointer arr3
	
	arr3 = merge(&arr1,&arr2);
	display(*arr3);
	cout<<endl;
	return 0;
}
