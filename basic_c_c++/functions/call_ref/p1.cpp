/*In this program we will see the function call by the refrence only supported by c++*/

#include<iostream>
#include<stdio.h>

using namespace std;

int swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;

	return 0;
}
int main()
{
	int a = 14,b = 15;
	cout<<"The value of the a before swapping is = "<<a<<endl;
	cout<<"The value of the b before swapping is = "<<b<<endl;

	swap(a,b);

	cout<<"The value of the a after swapping is = "<<a<<endl;
	cout<<"The value of the b after swapping is = "<<b<<endl;

	return 0;
}
