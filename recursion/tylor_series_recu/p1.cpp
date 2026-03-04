#include<iostream>
#include<stdio.h>
using namespace std;

/* In this program we see the implementation of the taylor series using recursive function */

double e(int x, int n)
{
	static double p = 1, f = 1;
	
	double r;

	if(n == 0)
		return 1;
	r = e(x,n-1);
	p = p*x;
	f = f*n;

	return r+p/f;

}
int main()
{
	cout<<e(1,10)<<endl;
	return 0;
}


