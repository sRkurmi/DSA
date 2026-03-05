#include<iostream>
#include<stdio.h>

using namespace std;

/*In this code we will see the implementation of the combination formula using recursion */
int NCR(int n ,int r)
{
	if(n == r || r == 0 )
		return 1;
	return NCR(n-1,r-1) + NCR(n-1,r);
}
int main()
{
	cout<<"Result = "<<NCR(5,2)<<endl;
	return 0;
}
