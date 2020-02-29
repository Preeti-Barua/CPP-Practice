#include<iostream>
using namespace std;
class student
{
	public:
		int x,y;
	public:
		student()
		{
			cout<<"inside default"<<endl;
			
		}
		student(int x,int y)
		{               
		                 int c;
			 c=x+y;
			cout<<c<<endl;
		}
		~student()
		{
			cout<<"destructor will get invoked"<<endl;
			
		}
};
int main()
{
	student st;
//	student s1=student(2,6);
	return 0;
}
