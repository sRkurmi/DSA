#include<iostream>
#include<stdio.h>

using namespace std;

/*In this program we see the simple exemple of nested recursion 

-->>in the nested recursion , recursive function will pass  parameter as nested call 
	simple recursion inside the recursion or recursive call taking recursive call as parameter */

int fun(int n)
{
	if(n > 100)
		return n - 10;
	return fun(fun(n+11));

}
int main()
{	
	int r;
	r = fun(95);
	cout<<r<<endl;
	return 0;
}
