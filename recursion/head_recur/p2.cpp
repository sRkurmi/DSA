#include<iostream>
#include<stdio.h>

/*In this program we see the conversion of the head recursion into loop means how to use loop instead of the head recursion 

	*/

using namespace std;

void fun(int n)
{
	int i = 0;

	while(i < n)
	{
		i++;
		cout<<i<<endl;
	}
}

int main()
{
	fun(5);

	return 0;
}
