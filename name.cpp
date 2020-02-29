#include<iostream>
using namespace std;
class Basicoperation
{
	public:
		string greet(string name)
		{
			return name;
		}
};

int main()
{
	Basicoperation obj;
	cout<<obj.greet("cppstudents")<<endl;
	string x=obj.greet("hello");
	cout<<x;
	return 0;
	
}
