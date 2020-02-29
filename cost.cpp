#include<iostream>
using namespace std;
class costomer

{
	public:
	int id;
	string cname;
//	public :
	//    void display(int id,string cname)
	public:
		costomer(int id,string cname)
	{
	//	this -> id=id;
	//	this -> cname=cname;
		//<<id;
		//cout<<cname;
		
	}
	void display()
	{
		cout<<id;
		cout<<cname;
	}
};
int  main()
{   
    /*	costomer c1;
	c1.id=100;
	c1.cname="abcd";
	c1.display(c1.id,c1.cname);
	*/
	costomer c1=costomer(100,"abcd");
	c1.display();

	return 0;
}
