#include<iostream>
using namespace std;
class Addition
{ public:
	void sum()
	{
		int x,y,r;
		cout<<"x:"<<endl;
		cin>>x;
		cout<<"y:"<<endl;
		cin>>y;
		r=x+y;
		cout<<r<<endl;
		
	}

	void m1(int x,int y)

{
	int r;
	r=x+y;
	cout<<r;
	
}
};
int main()
{
	Addition a;
	a.sum();
	int x,y;
	x=100,y=200;
	cout<<"m1"<<endl;
		a.m1(x,y);
	return 0;

}

