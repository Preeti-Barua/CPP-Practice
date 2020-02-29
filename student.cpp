#include<iostream>
using namespace std;
class Student
{                   public:
	
	int rollno;
	string name;
	string address;
};
int main()
{  
	 Student preeti;
	 preeti.rollno=12;
	 preeti.name="preeti";
	 preeti.address="fc road";
	 Student minhaj;
	 minhaj.rollno=13;
	 minhaj.name="minhaj";
	 minhaj.address="shivajinagar";
	 cout<<preeti.rollno<<endl;
	 cout<<minhaj.name<<endl;
	 return 0;
	 
	 
}

