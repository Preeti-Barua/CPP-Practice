#include<iostream>
using namespace std;
class Demo
{
	public:
		void divide(int x,int y)
		{
			int r=x/y;
			
			if(y==0)
			{
				cout<<"sorry"<<endl;
			}
			else
			{
				cout<<r;
			}
		}
};
int main()
{
	Demo obj;
	obj.divide(10,0);
	return 0;
}
