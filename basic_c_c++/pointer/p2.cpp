/*in this program we see the declaration and initialization of the array inside the heap memory 
these programs are being written by using both language c and c++ */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int *p;// declaration of the intezer pointer
	
	p = (int*) malloc(5*sizeof(int));//this is an assignment of the array created in the heap

 	
	/*below is the initializtion of the array created inside the heap*/

	p[0] = 10;
	p[1] = 15;
	p[2] = 20;
	p[3] = 25;
	p[4] = 30;
	
	for(int i = 0; i < 5; i++)
	{
		cout<<p[i]<<endl;
	}
	cout<<endl;		
	p = new int[5];// uisng c++ array has been created inside the heap 

	/*below is the initializtion of the element of the array created inside the heap using c++ */
	p[0] = 11;
	p[1] = 12;
	p[2] = 13;
	p[3] = 14;
	p[4] = 15;

	/*display of the element */
	for(int i = 0; i < 5; i++)
	cout<<p[i]<<endl;

	/*now we are freeing the memory */
	free(p);
	printf("memory has been freed by c pointer \n");
//	delete []p;
	cout<<"memory has been freed by c++ pointer"<<endl;
	
	return 0;
}
