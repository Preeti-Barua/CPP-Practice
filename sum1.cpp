#include<iostream>
using namespace std;
class test
{
	public:
	                
	                 void sum(int a) 
	                 {
	                 cout<<a;	
	                 }
	                 void sum(int a,int b)
	                 { 
	                 	int c;
	                 	c=a+b/2;
	                 	cout<<c;
	                 }
		void sum(int a,int b,int c)
		{
			int d;
			d=a+b+c/3;
			cout<<d;
			                 }	                 
	                 	
	                 
		
	};
	int main()
	{
	 test t;
	 t.sum(10,20,30);
	 return 0;	
	}
	
