#include<iostream>
#include<stdio.h>

/* here in this simple program we will see the use of the static variable inside the recursion */

using namespace std;

int fun(int n)
{
	 static int x = 0;// this is static variable

	if(n > 0)
	{
		x++;
		return 	fun(n-1)+x;
	}
 return 0;
}

int main()
{
	int r = 0;

	r = fun(5);// this is the function call 
	cout<<r<<endl;//so the result should 25 after excuting the program and that result we got after tracing the program manually.

	return 0;
}
