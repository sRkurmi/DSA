#include<iostream>
#include<stdio.h>

using namespace std;

/* in this example we will write the code for the sum of first 10 natural number using recursion,using itterative method and while using the formula also

	formula->> n(n+1)/2  */
/*below is the definition of the recursive function for the sum */
int sum(int n)
{
	if(n == 0)
		return 0;
	return sum(n-1)+n;
}

/*Below is the definition of the itterative function to find the sum of the natural no. */
int Isum(int n)
{
	int s = 0;
	
	for(int i = 0; i <= n; i++)
	{
		s = s+i;
	}
	return s;
}
int main()
{
	int r;

	r = sum(5);
	cout<<"This is the result of the recursive function = "<<r<<endl;

	r = Isum(5);
	cout<<"This is the result of the itterative function = "<<r<<endl;

	return 0;
}
