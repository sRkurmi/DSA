#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
/* In this program we will see the how append the element insdie the array */

struct Array 
{
	int A[10];

	int size;

	int length;
};

void Display(struct Array arr)
{
	int i;
	cout<<"These are the element of the Array"<<endl;
	for(i = 0; i < arr.length; i++)
		cout<<arr.A[i]<<" "; 
}
void Append(struct Array *arr, int x)// here we are going to modify the the Array so the call is call by address
{
	/* so before append the element we have to check the space */
	if(arr->length<arr->size)
		arr->A[arr->length++] = x; //here we are appending the element 
	 
}
int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};// here is the initialization of array , size = 10, length 5
	
	
	Append(&arr,10);
	Display(arr);
	cout<<endl;
	return 0;
}
