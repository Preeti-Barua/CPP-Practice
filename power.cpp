#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n=4,a=2,b=3,e;
	int c=a*a*a*a;
	int d=b*b*b*b;
	e=c>d?c:d;
	cout<<"the biggest value is:::"<<e<<endl;
	cout<<c<<endl;
	cout<<d;
	return 0;
}
