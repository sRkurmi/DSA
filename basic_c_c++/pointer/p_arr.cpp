#include<iostream>
#include<stdio.h>
/*in this program we see the array is getting initialize inside the stack and accessing with the help of the pointer */
using namespace std;

int main()
{
	int A[5] = {2,4,6,8,10};//this is array declaration and initialization

	int *p;//this is the declaration of the pointer

	p = A;//here we are assigning the array to pointer we can not give "&" becauce array name itself will give the base addres of the array
	/* p = &A[0]---->>> this is the another assignment of the array to the pointer */

	for(int i = 0; i < 5; i++)
	{
	cout<<A[i]<<endl;


	}
	cout<<"here p will act as the name of the array"<<endl;
	for(int i = 0; i < 5; i++)
	{	
		cout<<p[i]<<endl;
	}
	return 0;

}
