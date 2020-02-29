#include<iostream>
using namespace std;
class Cal
{
	public:
		int x,a,b;
	public :
	void show()
	{
		cout<<"in parent class";
	}


				
};
class Scal:public Cal
{
	int p,q;
	public:
	void show1()
	{
		cout<<"in child class";
	}
};
int main()
{
	Cal obj;
	obj.show();
	
	Scal obj1;
	obj1.show1();
	return 0;
	
}
