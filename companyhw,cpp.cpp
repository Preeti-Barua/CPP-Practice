#include<iostream>
using namespace std;
class company
{
	public:
		void def(int l,int mon)
		{        
		     
		     int sal;
		     int p;
		     
		     
	                         sal=mon*120;
	                         
	                         
	                         
	                         p=l*100;
		     
		   sal=(sal-p);
		     	
		     
	                         cout<<"your total salary is"<<sal<<endl;
		     	
		}
		
};
class manager: public company
{
	public:
		void def(int l, int mon)
		{        
		     
	                         int sal;
	                         int p;
		     
	                         sal=mon*140;
	                         
	                         
	                         
	                        
		    p=l*100;
		     
		   sal=(sal-p);
		     
	                         cout<<"your total salary is"<<sal<<endl;
		     	
		}
		
};

class s_manager:public company
{
public:
		void def(int l, int mon)
		{        
		     
		     int sal;
		     int p;
		     
	                         sal=mon*160;
	                         
	                         
	                         
	                        p=l*100;
		     
		   sal=(sal-p);
		     
	                         cout<<"your total salary is"<<sal<<endl;
		     	
		}
};

		     

int main()
{   
        int day,leave,day1,leave1,day2,leave2;        
 cout<<"enter number of days:";
cin>>day;
cout<<"enter leave:";
cin>>leave;

	company c;
	c.def(leave,day);
cout<<"enter number of days of manager:";
cin>>day1;
cout<<"enter leave:";
cin>>leave1;

	manager m;
	m.def(leave1,day1);
cout<<"enter number of days of trainee:";
cin>>day2;
cout<<"enter leave:";
cin>>leave2;

	s_manager s;
	s.def(leave2,day2);

	return 0;
}
