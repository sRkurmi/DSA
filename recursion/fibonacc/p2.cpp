#include<iostream>
#include<stdio.h>

using namespace std;

/*In this example code we will see the implementation of the fibonacci series with help of the simple recursive function */

int Rfib(int n)
{
	if(n <= 1)
		return n;
	return Rfib(n-2)+Rfib(n-1);
}
int main()
{
	cout<<"Result = "<<Rfib(6)<<endl;
	return 0; 
}
