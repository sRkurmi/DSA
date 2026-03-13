#include<iostream>

using namespace std;

/*In this program we will see the c++ code */

/* now we are making generic code so that it can work for all type of the array,  means we are creating the tempalate */

template <class T>

class Array
{
private:
	T *A;
	
	int size;

	int length;
public:
	Array()// this is non-parametarised constructor
	{
		 size = 10;
	
		A = new T[10];

		length = 0;
	}
	Array(int sz)
	{
		 size = sz;
		A = new T[size];
		length = 0;
	}
	~Array()// this is the destructor 
	{
		delete []A;
	}
	
	void Display();
	void Insert(int index, T x);
	T Delete(int index);
};// class ends here so template will also end 

template <class T>

void Array<T>::Display()
{
	for(int i = 0; i < length; i++)
		cout<<A[i]<<" ";
	cout<<endl;
}

template <class T>
void Array<T>::Insert(int index, T x)
{
	if(index >= 0 && index <= length)
	{
		for(int i = length-1; i >= index; i--)
			A[i+1] = A[i];
		A[index] = x;
		length++;
	}
}

template <class T>
T Array<T>:: Delete(int index)
{	
	T x = 0;
	
	if(index >= 0 && index < length)
	{	
		x = A[index];

		for(int i = index; i < length-1; i++)			
			A[i] = A[i+1];
		length--;
	}
	return x;
}

int main()
{
	Array<char> arr(10);// here in this line we have mentioned that i am goig to use the char type data
	arr.Insert(0,'a');
	arr.Insert(1,'c');
	arr.Insert(2,'d');
	arr.Display();
	
	cout<<"The deleted element is = "<<arr.Delete(0)<<endl;
	arr.Display();
	return 0;
}
