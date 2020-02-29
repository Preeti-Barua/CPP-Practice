#include<iostream>
using namespace std;
class copycd
{
	public:
		int x,y;
		public:
			copycd(int x,int y)
			{
			 
			  this ->x=x;
			  this ->y=y;	
			}
			void display()
			{
				cout<<x<<endl;
				cout<<y<<endl;
				
			}
			copycd(const copycd &sm)
			{
				x=sm.x;
				y=sm.y;
			}
};
int main()
{
	copycd obj =copycd(10,20);
	copycd obj1=obj;
	obj=obj1;
	obj.display();
	obj1.display();
	}
