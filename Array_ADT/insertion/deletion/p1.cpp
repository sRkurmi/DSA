#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

/* In this program we will see how to delete the element from array */

struct Array 
{
	int A[10];

	int size;

	int length;
};
/* Here is the implementation of the delete function */
int Delete(struct Array *arr, int index)
{
	int x = 0;
	int i;
	/* first we will check whether the is valid or not */
	if(index >= 0 && index < arr->length)
	{
		x = arr->A[index];// here we are storing the element which we are going to delete 
 
		for(i = index; i < arr->length-1; i++)// by the for loop we shifting the element 
			arr->A[i] = arr->A[i+1];

		arr->length--;//this is the updation of the length 

		return x;
	}
	return 0;
}

void display(struct Array arr)
{
	for(int i = 0; i < arr.length; i++)
		cout<<arr.A[i]<<" ";
}
int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	
	display(arr);
	cout<<endl;

	cout<<"deleted value is = "<<Delete(&arr, 4)<<endl;
	display(arr);
	cout<<endl;
	return 0;
}

