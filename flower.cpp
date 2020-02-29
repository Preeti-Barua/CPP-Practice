#include<iostream>
#include <string>
using namespace std;
class flowers
{
	private:
		string flower_name;
		string colour_name;
		string fragance_name;
		int leaves_no;
		
		
	public:
		void setdata(string fname,string col,string f,int l)
		{
		
		flower_name=fname;
		colour_name=col;
		fragance_name=f;
		leaves_no=l;
	}
		void displaydata()
		{
		
		cout<<"flower name:"<<flower_name<<endl;
		
		cout<<"colour:"<<colour_name<<endl;
		cout<<"fragrance:"<<fragance_name<<endl;
		cout<<"leaves:"<<leaves_no<<endl;
		
	}
};
int main()
{

	flowers fl;
	fl.setdata("lily","white","lilyfragrance",2);
	fl.displaydata();
	return 0;
	
}
		
		

