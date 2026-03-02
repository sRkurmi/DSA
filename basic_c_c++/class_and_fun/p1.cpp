/* In this program we will see the functions inside the class */
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class Rectangle 
{
public:
	int length;
	int breadth;

	void initialize(int l, int b)
	{
		length = l;
		breadth = b;
	}

	int area()
	{
		return length*breadth;
	}
	
	int perimeter()
	{
		int p = 0;
		p = 2*(length+breadth);
		return p;
	}

};

int main()
{	
	Rectangle r;
	int l,b;
	printf("please enter the length and breadth of the Rectangle\n");
	cin>>l>>b;

	r.initialize(l,b);

	int a = r.area();

	int peri = r.perimeter();

	cout<<"Length = "<<r.length<<endl<<"breadth = "<<r.breadth<<endl;
	cout<<"Area = "<<a<<endl<<"perimeter = "<<peri<<endl;

	return 0;
}
