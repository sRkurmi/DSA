#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	char s[] = "welcome";

	cout<<"Initially the string = "<<s<<endl;
	for(int i = 0; s[i]!='\0';i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
			s[i]-=32;
	}
	cout<<s<<endl;
	return 0;
}
