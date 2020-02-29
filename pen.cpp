#include<iostream>
using namespace std;
class Pen
{
	public:
		
		
		int price;
		string name;
	public:
		pen()
		{
			cout<<"writing is constucted behaviour of penclass";
			
		}
		void display()
		{
			cout<<"inside display";
		}
};
int main()
{
	Pen p;
	p.pen();
	Pen p1;
	p1.pen();
	p.display();
	
	return 0;
}
