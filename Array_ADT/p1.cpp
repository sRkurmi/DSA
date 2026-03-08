#include<iostream>
#include<stdio.h>

using namespace std;

/* In this example code the we will the simple code for Array ADT */
/* given below is struture type array */
struct Array
{
	int *A;
	
	int size;

	int length;
};
/* Definition of the display function */
void Display(struct Array arr)
{
	int i;
	cout<<"The Array element are"<<endl;
	for(i = 0; i < arr.length; i++)
		cout<<arr.A[i]<<endl;
}

int main() 
{
	int n;
	struct Array arr;// this is variable for structure type array

	/*first we asking to user to size of the array */
	cout<<"Please enter the size of the Array"<<endl;
	cin>>arr.size;
	
	/* now we allocating the memory to Array size which has been asked */
	arr.A = new int [arr.size];

	arr.length = 0;

	/* Ask no. of the element */
	cout<<"Please enter the no. of the number inside the Array "<<endl;
	cin>>n;
	
	/* Ask to enter the no. element to push inside the array */
	cout<<"Please enter the element"<<endl;
	for(int i = 0; i < n; i++)
		cin>>arr.A[i];

	cout<<endl;
	/* now we updating the length of the array*/
	arr.length = n;	
	
	/* Now we are calling the function to display the element */
	Display( arr);
	
	return 0;
}
