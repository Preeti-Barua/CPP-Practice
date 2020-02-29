#include<iostream>
using namespace std;
class Animal
{
	public:
		string colour;
		string name;
};
int main()
{
	Animal obj;
	obj.colour="red";
	obj.name="cow";
	cout<<obj.colour<<endl;
	cout<<obj.name<<endl;
	return 0;

}
