#include<iostream>
using namespace std;
class Student {
	
	public :
		
		int id; //data member
		string name;    //data member
};
int main()
{
	Student s1;
	s1.id=201;
	s1.name="PA";
	cout<<s1.id<<endl;
	cout<<s1.name<<endl;
	return 0;
}
