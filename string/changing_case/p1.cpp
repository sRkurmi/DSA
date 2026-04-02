#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	char s[] = "WELCOME";
	cout<<"Inistially the string is = "<<s<<endl;	
	for(int i = 0;s[i]!='\0'; i++)
	{
		if(s[i]>='A'&& s[i]<='Z')
			s[i]+=32;	
	}
	cout<<s<<endl;
return 0;
}
