#include<iostream>
#include<stdio.h>

using namespace std;

/*In this example we will see the simple code to find the possible value of the given set */

int fact(int n)// this is the function to find the factorial of the given number 
	{
		if(n == 0) return 1;
		return fact(n-1)*n;
	}
//below is function to find the possible set of the value

int nCr(int n , int r)
{
	int num = fact(n);
	int den = fact(r)*fact(n-r);
	
	return num/den;
}

int main()
{
	cout<<"Result = "<<nCr(5,2)<<endl;
	return 0;
}
