#include<iostream>
#include<stdio.h>

using namespace std;

/* In this code snippet we will try to write the code for finding the factorial of the n natural number using the recursive method as well as itterative method */

/*below is the definition of the recursive function to find the factorial of the n numbers */
int fact(int n)
{
	if( n == 0)
	{
		return 1;
	}
	else if(n < 0)
	{
		cout<<"invalid call"<<endl;
		return 0;
	}

	else
	{
	return fact(n-1)*n;
       	}
}

/*below is the definition of the itterative function to find the factorial of the n numbers */
int Ifact(int n)
{
	if(n == 0)
		{		
		return 1;
		}
	else if(n < 0)
	{
	cout<<"invalid call"<<endl;
	return 0;
	}
	else{
	int s = 1;

	for(int i = 1; i <= n; i++)
		s = s*i;
	return s;
	}
}
int main()
{
	int r;

	r = fact(-1);

	cout<<"fact result = "<<r<<endl;

	r = Ifact(-2);
	cout<<"Ifact result = "<<r<<endl;
	return 0;
}
