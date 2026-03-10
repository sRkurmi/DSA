#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
/* In this example code we will the implementation of the linear search  */

struct Array
{
	int A[10];
	int size;
	int length;
};
void display(struct Array arr)
{
	int i;
	for(i = 0; i < arr.length; i++)
		cout<<arr.A[i]<<" ";
}
int linearsearch(struct Array arr, int key)// we are passing the array by value because we not changing the array
{
	int i;
	for(i = 0; i < arr.length; i++)
	{
		if(key == arr.A[i])
		return i;// here we returning the index no. on which the key has been found 
	}
	return -1;
	// if not found
}
int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};
	
	cout<<linearsearch(arr,6)<<endl;
	display(arr);

	return 0;
}
