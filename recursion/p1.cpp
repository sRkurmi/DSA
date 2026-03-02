#include<iostream>
#include<stdio.h>
#include<stdlib.h>

/* In this program we will see the simple exemple program of the head */

/* so in the head recursion function will call itself first then other expression will be executed */

using namespace std;

void fun(int n)
{
	if(n>0)
	{
		fun(n-1);
		cout<<n<<endl;
	}
}


int main()
{
	int x = 3;

	fun(x);// this is the function call

return 0; 

}

