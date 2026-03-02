/*In this program we will see the monolithic programing style means everything will be inside the main function */

#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int length = 0, breadth = 0;

	printf("Please enter the Length and breadth of the Rectangle\n");
	cin>>length>>breadth;
	
	int area = length*breadth;
	int peri = 2*(length+breadth);

	printf("Area = %d\nperimeter = %d\n",area,peri);
	return 0;
}
