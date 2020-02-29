#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	 char s[50],ch;
	 int l,i;
	 cout<<"enter the string:::::";
	 gets(s);
	 for(l=0;s[l];l++);
	 for(i=0;i<l/2;i++)
	 {
	 	ch=s[i];
	 	s[i]=s[l-1-i];
	 	s[l-1-i]=ch;
	 }
	 
	 cout<<"revere is::"<<s;
	 
	 }
