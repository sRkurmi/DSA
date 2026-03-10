#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

/* In this example we will see the simple program for binary search by itterative method */

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

int Binarysearch(struct Array arr, int key)
{
	int l,h,mid;//low = l,high = h,middle = mid 
	
	l = 0;

	h  = arr.length-1;

	while(l <= h)
	{
		mid = (l+h)/2;// this how we are defining the mid for a given list 

		if(key == arr.A[mid])// here we checking whether the key is present at the mid or not 
			return mid;
	
		else if(key < arr.A[mid])
			h = mid-1;
		else
			l = mid+1;
	}
	return -1;
}
int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};

	cout<<Binarysearch(arr,2)<<endl;
	display(arr);
	return 0;
}
