#include<iostream>
using namespace std;
int main()
{
	 int a=0,b=1,c,i;
	 cout<<a<<endl<<b<<endl;
	 for (i=1;i<8;i++)
	 {
	 	c=a+b;
	 	cout<<c<<endl;
	 	a=b;
	 	b=c;
	 	
	 }
	 
	return 0; 
}
