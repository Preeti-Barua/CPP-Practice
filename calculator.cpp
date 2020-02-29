#include<iostream>
using namespace std;
class Calculator
{
	public:
		 int sum(int a,int b)
		{
			int c=a+b;
			return c;	
		}
		
	 int  sum(int a,int b,int c)
	{
		int d=a+b+c;
		return d;
		
	}
	 int sum(int a,int b,int c,int d)
	{
		int x=a=b+c+d;
	//	cout<<x;
		return x;
	}
		};
		
	
int main()
{
	Calculator obj;
	int x=obj.sum(10,20,30,40);
	cout<<x;
	return 0;
}
