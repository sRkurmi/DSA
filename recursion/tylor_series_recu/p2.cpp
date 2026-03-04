#include<iostream>
#include<stdio.h>

using namespace std;

/*In this exemple of code will try to implement taylor in the way so it take less no. of multiplications by with the help of recursion 
	also known as using the horner's rule implementing the taylor series */

//given below function is using recursive function 
double e(int x,int n)
{
	static double s;

	if(n == 0)
		return s;

	s = 1+x*s/n;
	
	return e(x, n-1);
}


int main()
{
	cout<<e(1,10)<<endl;
	return 0;
}
