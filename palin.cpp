#include<iostream>
using namespace std;
int main()
{
	int sum=0,n=1221,temp=n,a;
	
//	cout<<"enter any number";
//	cin>>n;
	while(n>0)
	{
		a=n%10;
		sum=sum*10+a;
		n=n/10;
		
	}
	if (temp==sum)
	{
		cout<<"palindrome";
		
		}	
	else
	{
		cout<<"not palindrome";
		
	}
	return 0;
		

}
