#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"In A class";
			
		}
};
class B
{
	public:
		void show()
		{
			cout<<"In B class";
			
		}
};
class C:public A,public B
{
public:
void display()
{
	A::show();
	B::show();
	
	}	
};
int main()
{
	C c;
	c.display();
	return 0;
}


