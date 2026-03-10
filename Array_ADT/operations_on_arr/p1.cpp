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
int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	
	cout<<Get(arr,2)<<endl;;// this is the function call
	display(arr);
	cout<<endl;
	return 0;
}
