#include<iostream>
#include<stdio.h>

using namespace std;

/* In this example code we will see the simple code for 2d_array */
/*so here we will see the different type of the method to create the 2D array */
int main()
{
	int A[3][4] = {{1,2,3,4},{2,4,6,8},{3,5,7,9}};//this simple declaration and initialization of the array 
	
	int *B[3];// In this declaration the No. of ROWs will be created inside the stack and coloms will be created inside the heap 

	int **C;// this declaration of 2D array with double poiter so both ROWs and coloms will be created inside the heap 

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			printf("%d  ",A[i][j]);	
	
		}
		printf("\n");
	}
printf("\n");
/*below is the creation of the Array B with NO. of ROWs are 3 inside the stack and no. of the coloms are dynamic so will be created inside the heap */
	B[0] = (int *)malloc(4*sizeof(int));
	B[1] = (int *)malloc(4*sizeof(int));
	B[2] = (int *)malloc(4*sizeof(int));
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cout<<B[i][j]<<"  ";
		}
		cout<<endl;
	}

cout<<endl;
/*below is the creation of the Array C with both no. of the ROWs and no. of the coloms are created inside the heap */
	
	C = (int **) malloc(3*sizeof(int));// this is the memory allocation for 3 rows
	/* This is the memory allocation for the coloms inside the heap */
	C[0] = (int *)malloc(4*sizeof(int));
	C[1] = (int *)malloc(4*sizeof(int));
	C[2] = (int *)malloc(4*sizeof(int));

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cout<<C[i][j]<<"  ";
		}
		cout<<endl;
	}
   return 0;
}
