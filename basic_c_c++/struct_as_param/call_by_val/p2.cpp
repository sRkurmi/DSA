/*In this program we will see the structure containing a array and that structure is passing as the parameter of the function */
  
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
   
 using namespace std;

struct Rectangle 
{
	int x;
	int A[5];// this is an intezar array inside the structure

/*int A[] -->>this no size array and that will be treated flexible member of the strucutre so it is compulsory to that no size array to be the last member of the structure always otherwise it will give error*/

};


void fun(struct Rectangle r1)
{	cout<<"X = "<<r1.x<<endl;
	
	for(int i = 0; i < (sizeof(r1.A)/sizeof(r1.A[0])); i++)
	cout<<"A = "<<r1.A[i]<<endl;
}
int main()
{
	struct Rectangle r = {6,{1,2,3,4,5}};

	fun(r);//that is the function call and r is the structure variable that is being passed by the parameter

	return 0;
}
             
