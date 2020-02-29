#include<iostream>
using namespace std;
class student
{
	public:
	//	int rollno;
	//	string name;
	public:
		void display()
		{
			cout<<"inside the display function"<<endl;
			
			
		}
		void display1(int id)
		{
			cout<<id;
		}
	};
	int main()
	{
		student a;
		a.display();
		student b;
		b.display1(100);
		
		return 0;
	}
