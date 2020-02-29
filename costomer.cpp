#include<iostream>
using namespace std;
class customer
{
	public:
		int cust_id;
		string name;
		string address;
		
		void display()
		{
			cout<<cust_id<<endl;
			cout<<name<<endl;
			
			cout<<address<<endl;
		}
};
int main()
{
	customer obj;
	obj.cust_id=101;
	obj.name="preeti";
	obj.address="pune";
	customer a;
	a.cust_id=110;
	a.name="ac";
	a.address="hin";
	a.display();
	obj.display();
	return 0;
}
