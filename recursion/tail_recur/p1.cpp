/* in this program will see the simple exemple of the tail recursion */
#include<iostream>
#include<stdio.h>

using namespace std;

void fun(int n)
{
	/* in the tail recursion the function will call itself in the last statement */

	if(n>0)
	{
	
	cout<<n<<endl;

	fun(n-1);//this is the recursive function call
	}
}
int main()
{
	int x = 3;

	fun(x);// this is the function call
	
	return 0;
}
