/*In this program we will see the how pass the array as the parameter in the function 

facts----> we can not use the for each loop upon a pointer but can be used on an array within a same function*/

#include<iostream>
#include<stdio.h>

using namespace std;

int fun(int A[], int n)
{
	A[0] = 15;
	for(int i = 0; i < n; i++)
		cout<<A[i]<<endl;
	return 0;
}
int main()
{
	int A[] = {2,3,4,5,6};
	
	int n = 5;//this is the number of the element or length of the array
	
	fun(A,n);
	
	return 0;

}
/*conclusion -->1. so when we pass array as parameter , we have to pass number of element also means length of the array 
		
		2. As array is parameter of a function it will give the base address like a pointer so if anything will be changed
	
		3. inside the function it will be reflected inside the main function */
