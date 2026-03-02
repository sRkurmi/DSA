/*In this program we will the complete class 
-->how to write */
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
class Rectangle
{
private:
	int length;
	int breadth;
public:
	Rectangle()//this is non-parametarised constructor
	{	/* here we are initializing the length and breadth to zero */
		length = 0;
		breadth = 0;
	}
	Rectangle(int l, int b)// this is parametarised constructor also called constructor overloading
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
		int p;
		p = 2*(length+breadth);
		return p;
	}
	void setlength(int l)
	{
		 length = l;
	}
	void setbreadth(int b)
	{
		 breadth = b;
	}
	int getlength()
	{
		return length;
	}
	int getbreadth()
	{
		return breadth;
	}
	~ Rectangle()
	{
		cout<<"destructor is running"<<endl;
	}

};
int main()
{
	int L,B;
	cout<<"please enter the length and breadth"<<endl;
	cin>>L>>B;
	Rectangle r(L,B);

	//r.Rectangle();
	cout<<"Length = "<<r.getlength()<<endl<<"Breadth = "<<r.getbreadth()<<endl;
	int a = r.area();
	cout<<"Area = "<<a<<endl;

	int peri = r.perimeter();
	cout<<"perimeter is = "<<peri<<endl;

	
	return 0;
/*once the main is end the object automatically call destructor */
}
