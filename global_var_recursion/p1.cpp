#include<iostream>
#include<stdio.h>

using namespace std;

/*In this program we will see the global variable inside the recursive function */

/*this program will also give the same result as got in the static variable inside the recursive funtion 
--->> so the output must be 25 */


int x = 0;// this is the global variable 

int fun(int n)
{
	if(n > 0)
	{
		x++;
	       return fun(n-1)+x;
	}
	return 0;
}

int main()
{
	int r;

	r = fun(5);

	cout<<r<<endl;

return 0;

}
