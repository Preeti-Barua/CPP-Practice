#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		
		
	public:
		void print_no()
		{
			int i ;
			for(i=0;i<=10;i++)
			{
		

				cout<<i;
			}
		}
	};
class B
{
	public:
		int print_no()
		{
			int i;
				for(i=0;i<=10;i++)
			{
		

			cout<<i;
			}
		}
			
		};
class C:public A,public B
{
public:
	int y;
		
};
int main()
{
	C obj;
	obj.print_no();
	return 0;
}

