/*in this program we will see the function call by address */

#include<iostream>
#include<stdio.h>

using namespace std;

int swap(int *x, int *y)
{
	int temp;

	temp = *x;

	*x = *y;

	*y = temp;

	return 0;

}

int main()
{
	int a = 12, b = 13;

	cout<<"the value of the a before swapping is = "<<a<<endl;
	cout<<"the value of the b before swapping is = "<<b<<endl;

	swap(&a,&b);
	cout<<"the value of the a after the swapping is = "<<a<<endl;
	cout<<"the value of  the b after the swapping is = "<<b<<endl;

	return 0;
}
