#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

/* In this example we will see the implementation of the binary search by recursive method */

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

int RBinsearch(int a[],int l,int h,int key)
{
	int mid;
	if(l <= h)
	{
	    mid = (l+h)/2;

		if(key == a[mid])
			return mid;

		else if(key < a[mid] )
			return RBinsearch(a,l,mid-1,key);
		
		else
			return RBinsearch(a,mid+1,h,key);
	}
	return -1;
}
int main()
{
	struct Array arr = {{2,3,4,5,6},10,5};// this initialization of the array
	
	cout<<RBinsearch(arr.A,0,arr.length,6)<<endl;
	display(arr);
	cout<<endl;
	return 0;
}
