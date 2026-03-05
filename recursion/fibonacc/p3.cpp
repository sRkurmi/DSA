#include<iostream>
#include<stdio.h>

using namespace std;


/*In this example we see the implementation of the fibonacci series using recursive function with reduced no. of calls that is also known as using memoization */

int F[10];//this is the global array

int mfib(int n)// this is the memoization function 
{
	if(n <= 1)
	{
		 F[n] = n;
		return n;
	}
	else
	{
		if(F[n-2]==-1)
			F[n-2] = mfib(n-2);
		if(F[n-1]==-1)
			F[n-1] = mfib(n-1);
		F[n] = F[n-2]+F[n-1];// this is filling the value inside the array		
		return F[n-2]+F[n-1];
	}
}
int main()
{
	for(int i = 0; i < 10; i++)// this is the initialization of the array
		F[i] = -1;
	cout<<"Result = "<<mfib(6)<<endl;
	return 0;
}

