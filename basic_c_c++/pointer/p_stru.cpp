/*in this program we will see the pointer to the structure through both the way dynamically and statically */

#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

int main()
{
	struct Rectangle r1 = {10,5};//structure variable in c

	printf("%d\n",r1.length);
	printf("%d\n",r1.breadth);
	
	cout<<endl;
	Rectangle r = {10,5};//object of the structure in the c++
	cout<<r.length<<endl;
	cout<<r.breadth<<endl;

/*Now we are declaring a pointer to the structure variable of c and to the object of the c++ ragarding the same structure and will try to access the element  */
	cout<<"structure member are being displayed by using the static pointer"<<endl;

	struct Rectangle *p = &r1;
	printf("%d\n",p->length);
	printf("%d\n",p->breadth);

	cout<<endl;
	Rectangle *A = &r;
	cout<<A->length<<endl;
	cout<<A->breadth<<endl;

/*below we are trying to create the structure variable and structure object inside the heap with the help of the pointer */

	cout<<"Dynamic creation of the pointer to the structure using c and below is the structure member accessed through the pointer"<<endl;
	p = (struct Rectangle*) malloc(sizeof(struct Rectangle));//this syntex is for c
	p->length = 20;
	p->breadth = 30;
	printf("%d\n",p->length);
	printf("%d\n",p->breadth);

	cout<<"Dynamic creation of the pointer to the structure using c++ and below is the structure member accessed through the pointer"<<endl;
	A = new Rectangle;// this is syntex for the c++
	A->length = 40;
	A->breadth = 50;
	cout<<A->length<<endl;
	cout<<A->breadth<<endl;
	
	free(p);
	printf("c pointer has been freed\n");

	delete A;
	cout<<"C++ pointer has been deleted"<<endl;

return 0;
	
}
