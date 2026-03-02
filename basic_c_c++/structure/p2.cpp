#include<iostream>
#include<stdio.h>

using namespace std;

struct rectangle
{
	int length;
	int breadth;
	char x;
};

int main()
{
	struct rectangle r1={10,5};

	cout<<r1.length<<endl;
	cout<<r1.breadth<<endl;

	printf("%ld\n", sizeof(r1));
	
/*this program will show the size of the structure variable 12 
	but the actual usage for the storing the data will be used as 9
	4 + 4 for integer and 1 byte for the character 
means` our machine will access 4 byte at a time but 1 byte will be used out of it*/


/*now we going to change the value of the r1*/

r1.length = 15;
r1.breadth = 7;

cout<<r1.length<<endl;
cout<<r1.breadth<<endl;

return 0;
}
