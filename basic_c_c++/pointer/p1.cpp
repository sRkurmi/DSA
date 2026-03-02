#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int a = 10;
	
	int *p;

	p = &a;

	cout<<a<<endl;
	printf("using pointer %d\n", *p);/*if we will write p then it read only address and *p will read the value at that perticular address */
	printf("using pointer %p\n",p);//this line will give the address of the intezer pointed by the pointer 
	printf("using pointer %p\n",&a);//this line will give the address of the intezer pointed by the pointer
	printf("using pointer %p\n",&p);// this line will also give the address of the pointer
	return 0;
/* we have to "*" only at the time of the declaration and derefrencing */
}
