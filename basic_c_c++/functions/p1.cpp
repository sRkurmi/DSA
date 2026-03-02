/*in this program we are going to see the simple program realted to function prototype,definition,calling, parameters */

#include<iostream>
#include<stdio.h>

using namespace std;

/* below is the function prototype and definition of the function */
int add(int a, int b)//in the prototype we are passing the formal parameter
{
	int c;

	c = a+b;

	return c;
}
int main()
{
	int num1 = 10, num2 = 5,sum;

	sum = add(num1,num2);// this is function calling and here we are passing the actual parameter

	cout<<"The sum is = "<<sum<<endl;

	return 0;

}
