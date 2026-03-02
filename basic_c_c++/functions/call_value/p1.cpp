/*in this program we will see the function by value */
#include<iostream>
#include<stdio.h>

using namespace std;
int swap(int x, int y)
{
	int temp;
	
	temp = x;
	
	x = y;
	y = temp;
	
	cout<<"the value of a inside swap function is = "<<x<<endl;
	cout<<"the value of b inside swap function is = "<<y<<endl;
	
	return 0;

}
int main()
{
	int a = 10,b = 20;
	
	cout<<"the value of a before swapping is = "<<a<<endl;
	cout<<"the value of b before swapping is = "<<b<<endl;

	swap(a,b);
	cout<<"the value of the a after swapping is = "<<a<<endl;
	cout<<"the value of the b after swapping is = "<<b<<endl;


}
