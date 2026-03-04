#include<iostream>
#include<stdio.h>

using namespace std;

/*In this exemple code we will see the implementation of the taylor series using itterative method while reducing the no. of multiplication call */

double e(int x, int n)
{
	 double s = 1;
	double num = 1;
	double den = 1;
	int i;
	for(i = 1; i <= n; i++)
	{
		num*=x;
		den*=i;//this will give factorial value
		s+=num/den;
	}
	return s;
}

int main()
{	
	cout<<e(1,10)<<endl;
	return 0;
}
