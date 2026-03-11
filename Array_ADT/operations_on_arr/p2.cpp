#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

/* In this exaple code we will see inseting an element inside the sorted array , checking whether the array is sorted or not and arranging the -ve and negative either side of an array */

struct Array
{
	int A[10];
	
	int size;

	int length;
};
void swap(int *x, int *y)
{
	int temp;

	temp = *x;

	*x = *y;

	*y = temp;
}
void display(struct Array arr)
{
	for(int i = 0; i < arr.length; i++)
		cout<<arr.A[i]<<" ";
		cout<<endl;
}

void Insertsort(struct Array *arr, int x)
{
	int i = arr->length-1;
	/* first we will check that the space avialable or not inside the array */
	if(arr->length == arr->size)
		return ;
	/* now we will shift the element to find the sorted position for the element so scan through out the array and shift the element */
	
	while(i >= 0 && arr->A[i] > x)// we checking the index validity
	{	
		arr->A[i+1] = arr->A[i];	
			i--;
	}	
	/* so after getting the right place we have to insert the element */
		arr->A[i+1] = x;
		arr->length++;
}
int Issorted( struct Array arr)
{	int i;
	for(i = 0; i < arr.length-1; i++)
	{
		if(arr.A[i] > arr.A[i+1])
		return 0;
	}
	return 1;
}
/* In this function we will implement the functionality to Arrange the positive and negative either side of the Array */
void Rearrange(struct Array *arr)
{
	int i = 0, j;
	j = arr->length-1;
	while(i < j)
	{
	while(arr->A[i]<0) i++;
	while(arr->A[j]>=0) j--;
	if(i < j){
		swap(&arr->A[i],&arr->A[j]);
		}
	}
}

int main()
{	 
	struct Array arr = {{2,-3,25,10,-15,-7},10,6};
//	cout<<"The Array list before inserting the element"<<endl;
	display(arr);
//	Insertsort(&arr,4);
//	cout<<"After inserting the element the Array list is"<<endl;
	cout<<"Issorted Return "<<Issorted(arr)<<endl;
	cout<<"Rearranged Array is given below"<<endl;
	Rearrange(&arr);
	display(arr);
	return 0;
}
