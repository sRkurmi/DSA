#include<iostream>
#include<stdio.h>

using namespace std;

/* In this example code we will see the declaration and initialization of the array */

int main()
{
	int A[5];// this just declaration of array without any initialization this array may have garbage value 

	int B[5] = {2,3,4,5,6};// this is declaration and initialization with all the element of given size.

	int C[5] = {2,4};// this is also declaration and initialization with some element and rest of the places will be filled with '0'

	int D[] = {2,3,4,5,6};// this is aslo the declaration without size and initialization with the element so size will be automatically calculated by given no. of element

	int E[5] = {0};// this declaration with given size all the element will be initialized with '0'
	
	//Below i am printing the address of the element of the array to see the contiguous memory of the array 

	for(int i = 0; i < 5; i++)
		cout<<"Address of A["<<i<<"] = "<<&A[i]<<endl; 
	return 0;
}
