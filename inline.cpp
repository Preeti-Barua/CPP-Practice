#include<iostream>
using namespace std;
class Demo
{
	public:
		inline int sum(int x,int y)
		{
			return x+y;
			
		}
		inline int cube(int x)
		{
			return x*x*x;
			
		}
		inline int square(int y)
		{
			return y*y;
		}
	
};
int main()
{


	Demo obj;
	int x=obj.sum(10,20);
	int y=obj.cube(3);
	int s=obj.square(2);
	cout<<x<<endl;
	
	cout<<y<<endl;
	cout<<s;
	return 0;
}
