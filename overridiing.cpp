#include<iostream>
using namespace std;
class Bank
{
	public:
		void Homeloan()
		{
			cout<<"every bank will give loan"<<endl;
			
		}
};
class SBIbank:public Bank
{
	public:
		void Homeloan()
		{
			cout<<"SBI will give loan"<<endl;			
		}
};
int main()
{
	Bank b1;
	b1.Homeloan();
	SBIbank b2;
	b2.Homeloan();
	return 0;
}
