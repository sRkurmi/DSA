#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

/*In this program we will see the improvement in the linear search  at one position of the current position of the index and at the head position */

struct Array 
{
	int A[10];

	int size;

	int length;
};
/* this swap function will improve the seaching we call this function inside the linear seach function */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;

	*x = *y;

	*y = temp;
}
int linearsearch(struct Array *arr, int key)
{
	for(int i = 0; i < arr->length; i++)
	{
		if(key == arr->A[i])
		{
		/* below we are calling the swap function to perform the transposition */

		swap(&arr->A[i], &arr->A[0]);//this interchange the element and alway keep the found key at 0th position or head position 
		return i;
		}
	}
	return -1;
}
void display(struct Array arr)
{
	for(int i = 0; i < arr.length; i++)
		cout<<arr.A[i]<<" ";
}

int main()
{	
	struct Array arr = {{2,3,4,5,6},10,5};

	cout<<linearsearch(&arr,5)<<endl;
	display(arr);
	cout<<endl;
	return 0;
}
