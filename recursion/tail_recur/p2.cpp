#include<iostream>
#include<stdio.h>

using namespace std;

/* In this program we will see functionality of tail recursion with the help of loop 
	means instead of calling function recursively we can use the loop 
   -->> tail recursion means at the returning it does not anything to perform 

==>Note ->1.  As we know every function call will create a activation record, that activation record will occupy the memory in the stack hence to use the recusive is memory consuming option 
	->2. In the case the loop only activation record will be created and will occupy very less memory as compare to recursion 
		
		 => LOOP's ARE MORE Efficient in the case of space complexity
		
		   => But time complexity is same for both	*/
  
void fun(int n)
{
	while(n > 0)/*this loop will give the same functionality as we have seen in the recursion */
	{
		cout<<n<<endl;
		n--;
	}
}
int main()
{

	 fun(5);
	
	
	return 0;
}

