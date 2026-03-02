/*In this program we will see the modular style of the program 
  -->> user interection code is to be kept inside the main function 
  -->> processing code would define outside the main function separately */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int area(int length, int breadth)
{
	return length*breadth;
}
int perimeter(int length,int breadth)
{
	int p = 0;
	p = 2*(length+breadth);
	
	return p;
}

int main()
{
	int length = 0, breadth = 0;

	printf("please enter the length and breadth of the rectangle\n");
	cin>>length>>breadth;

	int a = area(length,breadth);
	int peri = perimeter(length,breadth);

	cout<<"Area = "<<a<<endl<<"perimeter = "<<peri<<endl;

	return 0;
}
