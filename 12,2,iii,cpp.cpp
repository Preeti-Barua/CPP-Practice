#include<iostream>
using namespace std;
class Test
{
	public:
		Test()
		{
			cout<<"Test"<<endl;
			
		}
};
class A:public Test
{
	protected:
		A()
		{
			cout<<"class A";
			
		}
/*	protected:
		int a;
		void getA(int a)
		{
			this ->a=a;
			cout<<a;
			
		}*/
};
class B:public A
{
	protected:
		B()
		{
			cout<<"class B";
			
		}
//	protected:
	//	int a;
	//	void getB(int b)
	//	{
			//this ->b=b;
			//cout<<b;
			
	//	}
};
class C
	{
	
	public:
		c()
		{
			cout<<"inside c";
		}
	/*	int x;
		public:
			void getx(int a)
			{
				this ->x=a;
				cout<<a;
			}*/
		};
class D:public B
{
 public:
 D()
 {
 	cout<<"inside  d";
	 }	
};
int main()
{
	D obj;
	return 0;
}

