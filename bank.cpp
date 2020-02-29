#include<iostream>
using namespace std;
class Bank
{
	public:
		
		
		static string bname;
		static string bcode;
		string cname;
		string c_add;
		
		
};
string Bank :: bname="axis";
string Bank :: bcode="1234";
int main()
{

 cout<<Bank::bname;
 cout<<Bank::bcode;
 Bank ba;
 ba.cname="hhhh";
 ba.c_add="hhkhk";
 cout<<ba.cname;
 cout<<ba.c_add;
 //ba.cname("preeti");
 
 //ba.add("pune");
// cout<<ba.cname;
 //cout<<ba.add
 return 0;
 
 
  }
