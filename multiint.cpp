#include<iostream>
using namespace std;
class person
{
	public:
		int pid;
		public :
			person()
			{
			cout<<"its the person"<<endl;	
			}
		
};
class Emp:public person
{
	public:
		int empid;
		public :
			Emp()
			{
			cout<<"its the emp"<<endl;	
			}
		
	
		
};
class PerEmp:public Emp
{
	public:
		int peremp;
		public :
			PerEmp()
			{
			cout<<"its the peremp"<<endl;	
			}
		
};
class Mgr:public PerEmp
{
	public:
		int Mgrid;
		public :
			Mgr()
			{
			cout<<"its the Mgr"<<endl;	
			}
		
		
};
int main()
{
	Mgr obj;
	obj.empid;
	return 0;
}
