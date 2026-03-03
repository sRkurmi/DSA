#include<iostream>
#include<stdio.h>

using namespace std;

void fun(int n)
{
	if(n > 0)
	{
	
	cout<<n<<" ";
	/*below is the recursive function call 2 times and once we will draw the tracing for the whole function the tracing structure will be looking like tree structre*/

	fun(n-1);

	fun(n-1);
	

	}
	
}
int main()
{
	fun(3);// this is the function call for the value 3
	cout<<endl; 
	return 0;
}

/* In this program we will see the simple program of the tree recursion */

