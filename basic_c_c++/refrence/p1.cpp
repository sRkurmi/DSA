/*in this program we will see the usage of the reference of c++
	refrece is only available in the c++*/

#include<iostream>

using namespace std;

int main()
{
	int a = 10;

	int &r = a;/* this is declaration and initialization of the refrence so it is compulsory to declare and initialize both at a time in the case of  reference otherwise it will show error */
	
	cout<<a<<endl<<r<<endl;
	/*refrence does not consume the memroy ,it usage the memory of the variable */

	int b = 30;
	r = b;/*here we are assigning b to r, a and r both are same so the value will be 30 for also */
	cout<<a<<endl<<r<<endl;

	return 0;
	
}
