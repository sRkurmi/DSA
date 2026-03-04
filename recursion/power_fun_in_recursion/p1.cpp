#include<iostream>
#include<stdio.h>

/* In this code we will see the power function  using recursion */

using namespace std;

int power(int m, int n)//this function will take more no. of multiplication as compare to power1
{
	if(n == 0)
	{
		return 1;
	}
	return power(m,n-1)*m;

}
/*given below is the definition of the power1 function with reduced no. of multiplication call */
int power1(int m, int n)
{
	if(n == 0)
	{
		return 1;
	}
	else if(n%2 == 0)// this condition for even power
	{
		return power1(m*m,n/2);
	}
	return m*power1(m*m,(n-1)/2);// this is for odd power
}

int main()
{
	int r;
	r = power1(2,9);// this is the function call
	cout<<"Result of power1 = "<<r<<endl;

	r = power(2,9);
	cout<<"Result of power = "<<r<<endl;
	return 0;
}
