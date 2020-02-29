#include<iostream>
using namespace std;
class Student
{
	public:
		int x;
	static string course_name;
	static int id;
};
//string Student course_name="cpp";
string Student :: course_name="cpp";
int Student :: id=100;
int main()
{
 	cout<<Student::course_name;
	 Student s1;
	 s1.x=1000;
	 cout<<s1.x;
	 cout<<Student::id;	
}

