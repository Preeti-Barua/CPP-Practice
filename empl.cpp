#include<iostream>
using namespace std;
class Employee
{
	public:
		Employee()
		{
			cout<<"default constructor"<<endl;
			
		}
		Employee(int id,string dept)
		
		{
		  	cout<<id<<endl;
			cout<<dept<<endl;	
		}
};
int main()
{
	Employee e1;
	Employee e2;Employee(101,"it");
	return 0;
}

