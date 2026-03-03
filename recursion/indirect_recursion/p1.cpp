#include<iostream>
#include<stdio.h>

using namespace std;

/*In this program we see the simple function of the indirect recursion 
--->>there will be more than one funtions inside the function and functions are calling one-another in a circular fashion */

/*below is the prototype of the funtions */
//void int funA(int n);
void funB(int n);

/*below is the definition of the function A */
void funA(int n)
{
	if(n > 0)
	{
		cout<<n<<" ";
		funB(n-1);
	}
}

/*below is the definition of the function B */
void funB(int n)
{
	if(n > 1)

	{
		cout<<n<<" ";
		funA(n/2);
	}
}

int main()
{	
	funA(20);// this is the function call from the main function
	cout<<endl;
	return 0;
}
