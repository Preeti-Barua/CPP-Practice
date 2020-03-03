#include<iostream>
using namespace std;
int main()
{
	int f=1,n;
	cout<<"enter the number::::";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		f=f*i;
	}
	cout<<"the factorial is::"<<f;
	return 0;
}
