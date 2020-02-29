#include<iostream>
using namespace std;
class Customer
{
	public:
		int cust_id;
		string name;
		string address;
		
	void setdata(int id, string na,string add)
	
	
	{
	    cust_id=id;
	    name=na;
	    address=add;	
	    
	}
	void display()
	{
		cout<<"costomer id:"<<cust_id<<endl;
		cout<<"costomer name"<<name<<endl;
		
		cout<<"address :"<<address<<endl;
	}
	
};


int main()
{
	Customer obj;
	int id;
	string na;
	string add;
	cout<<"enter the customer id:"<<endl;
	cin>>id;
	cout<<"enter the customer name:"<<endl;
	cin>>na;
	cout<<"enter the customer add:"<<endl;
	cin>>add;
	
	obj.setdata(id,na,add);
	obj.display();
	return 0;
	
}
