#include<iostream>
using namespace std;
class Employee
{
	public:
	int x;
	public:
		 Employee(int x1)
		 {
		 	cout<<"default constructor";
		 	cout<<x;
		 }
		  Employee(int id, string dept)
		  {
		  	cout<<id;
		  	cout<<dept;
		  }
		 Employee(Employee &i)
		 {
		 	x=i.x;
		 	cout<<x;
		 }
};
int main()
{
	 Employee e1= Employee(100);
	  Employee e2= Employee(e1);
	  cout<<e2.x;
	  return 0;
}
