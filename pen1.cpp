#include<iostream>
using namespace std;
class Pen
{
	public:
		
		
		int price;
		string name;
	public:
		Pen()
		{
			cout<<"default constructor";
			price=10;
			name="abc";
			cout<<price<<endl;
		                   cout<<name<<endl;
			
			
		}
		Pen(int p,string n)     //parameterised constructor
		{
			cout<<p<<endl;
			cout<<n<<endl;
			cout<<"parametrised constructor"<<endl;
		}
		Pen(string brand)              //parameterised constructor
		{
			cout<<brand;
		}
};
int main()
{
	Pen p1;
	Pen p2=Pen(10,"butterflow");
	Pen p3=Pen("camel");

	
	return 0;
	
	
}
