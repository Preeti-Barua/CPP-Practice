#include<iostream>
using namespace std;
class Account
{
	public:
		string c_name;
		string acc_type;
		static float roi;
	public:
		void accept()
		{
			cout<<"enter the name::::"<<endl;
			cin>>c_name;
			cout<<"enter the account number::::"<<endl;
			cin>>acc_type;
		
		}
		void display()
		{
			cout<<c_name<<endl;
			cout<<acc_type<<endl;
			cout<<roi<<endl;
		}
		
};
float Account:: roi= 6.5;
int main()
{
	Account a1;
	a1.accept();
	a1.display();
	
	Account a2;
	a2.accept();
	a2.display();
	return 0;
}
