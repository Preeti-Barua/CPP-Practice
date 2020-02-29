#include<iostream>
using namespace std;
class school
{
	public:
		student(string name,int rollno)
		{
			cout<<"enter the name"<<endl;
			cout<<"enter the rollno"<<endl;
			
		}
	                    student(int marks, string address)
	                    {
	                    	cout<<"enter marks";
	                    	cout<<"enter address:";
		}
		
		
};
int main()
{
	school obj;
	obj.student("preeti",121);
	obj.student("400","pune");
	return 0;
}
