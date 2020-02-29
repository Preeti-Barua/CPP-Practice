#include<iostream>
using namespace std;
class student
{
	public:
		int roll_no;
		string name;
		static string course;
	public:
		void display()
		{ 	 cout<<name<<endl;
			cout<<roll_no<<endl;
			cout<<course;
		}
		

};
string student::course="cpp";
int main()
{
	student  st1;
	st1.roll_no=10;
	st1.name="preeti";
	student st2;
	st2.name="qwer";
	st2.roll_no=12;
	
	cout<<st1.roll_no<<endl;
	cout<<st1.name<<endl;
	st1.display();
	st2.display();
	return 0;
}
