#include<iostream>
#include<stdio.h>

using namespace std;

/*In this example of we will see the implementation of the fibonacci series using itterative method */

int fib(int n)
{
	int t0 = 0,t1 = 1,s = 0,i;
	
	if(n <= 1)
		return n;
	for(i = 2; i <= n; i++)
		{
			s=t0+t1;
			t0=t1;
			t1=s;
		}
	return s;

}

int main()
{
	
	cout<<"Result = "<<fib(6)<<endl;
	
	return 0;

}
