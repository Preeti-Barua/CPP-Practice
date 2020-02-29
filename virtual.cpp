#include<iostream>
using namespace std;
class Employee
{
	public:
		virtual  void cal_salary()
		{
			cout<<"Employee class should have this method"<<endl;
			
		
		}
		
};
class TE:public Employee
{                  public:
	void cal_Salary()
	{
		cout<<"salary for TE"<<endl;
		
	}
};
int main()
{
	Employee*e1;
    //	e.cal_salary();
	TE e2;
//	t.cal_salary();
	e1=&e2;
	e2.cal_Salary();

	
}
