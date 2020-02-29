#include<iostream>
using namespace std;
class sum
{
	public:
		sum()
		{            
		                     int a;
		                     int b;
			cout<<"default construcutor  ";
			a=2;
			b=3;
			cout<<a+b<<endl;
		}
		sum(int a,int b)
		{
			int c;
			c=a+b;
			cout<<"parameterised cons  ";
			cout<<c<<endl;
			
			
		}
		sum(int a,int b,int c)
		{
			int d;
			d=a+b+c;
			cout<<"parameterised cons   ";
			cout<<d<<endl;
			
		}
};
int main()
{
	sum obj;
	sum obj2=sum(2,6);
	sum obj3=sum(1,4,5);
	return 0;
	
}
