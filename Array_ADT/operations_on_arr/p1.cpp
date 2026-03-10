#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

/* In this example code we will see the different type of the operations on an array */

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
int Get(struct Array arr,int index)
{
	/*first we will check whether the index is valid or not */
	if(index >= 0 && index < arr.length)
		return arr.A[index];// here we returning the element at that perticular index
	return -1;
}
int set(struct Array *arr,int index, int x)
{
	/* so this function is taking 3 parameter 1st is array , 2nd is index, 3rd is new value */

	/* first we check we the index whether the index is valid or not */
	if(index >= 0 && index < arr->length)
		arr->A[index] = x;
		return arr->A[index];
}
int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	cout<<"Given below is the array we kept"<<endl;
	display(arr);
	cout<<endl;
	cout<<"Get fun call = "<<Get(arr,2)<<endl;// this is the function call for get function
	cout<<"the new value by set func = "<<set(&arr,2,1000)<<endl;
	cout<<"The changed Array is given below"<<endl;
	display(arr);
	cout<<endl;
	return 0;
}
