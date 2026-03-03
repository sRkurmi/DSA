#include<iostream>
#include<stdio.h>

using namespace std;

/* In this program we will call the recursive function 2 time inside the main.
 also we will use the global variable 
workflow-
	-->we call recursive function 5 times at once 
	--> so in the very fist call first the value of the global variable will be set 5 and final output of the main will be 25 
	--> In the next the value of the global variable will start from 5 and will go up to 10 and final output of main will be 50 */

int x = 0;
int fun(int n)
{

	if(n > 0)
	{	
	
		x++;
		cout<<x<<endl;

		return fun(n-1)+x;// recursive function call
	}	

return 0;

}
int main()
{
	int r;

	r = fun(5);// this is the first function call
	cout<<r<<endl;

	r = fun(5);// this is the second function call
	cout<<r<<endl;

return 0;
}
