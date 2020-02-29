#include<iostream>
using namespace std;
class Demo
{
	public:
		void divide(int x,int y)
		{
		       int r;	
		
		if(y==0)
		
			throw"cant divide by zero";
		
		r=x/y;
		cout<<r;
	}
		
		
};
int main()
{
	Demo obj;
	try
	{
		obj.divide(10,10);
		
	}
	catch(const char*e)
	{
	//	cerr<<e<<endl;
	cout<<e<<endl;
	}
	
	
	return 0;
}
