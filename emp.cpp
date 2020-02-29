#include<iostream>
#include<string>
using namespace std;
class emp
{
	private:
		string emp_name;
		int emp_id;
		int emp_age;
		double emp_salary;
		string emp_gender;
	public:
		void setdata(string e_name,int e_id,int e_age,double e_sal,string e_gen)
		
		{
		  emp_name=e_name;
		  emp_id=e_id;
		  emp_age=e_age;
		  emp_salary=e_sal;
		  emp_gender=e_gen;
		  	
		}
		
		void displaydata()
		{
				
			
		cout<<emp_name<<endl;
		
		cout<<emp_id<<endl;
		cout<<emp_age<<endl;
		cout<<emp_salary<<endl;
		cout<<emp_gender<<endl;
	                    }
	
		
		
		
		
};
int main()
{
	emp e1;
		string emp_name;
		int emp_id;
		int emp_age;
		double emp_salary;
		string emp_gender;
	
	cout<<"enter the enployee name:"<<endl;
	cin>>emp_name;
	cout<<"enter the enployee id"<<endl;
	cin>>emp_id;
	cout<<"enter the enployee age:"<<endl;
	cin>>emp_age;
	cout<<"enter the enployee salary:"<<endl;
	cin>>emp_salary;
	cout<<"enter the enployee gen:"<<endl;
	cin>>emp_gender;
	e1.setdata(emp_name,emp_id,emp_age,emp_salary,emp_gender);
	e1.displaydata();
	return 0;
}
