#include <iostream>
#include <String>
using namespace std;
class cars
{
	 private:
	 	string company_name;
	 	string model_name;
	 	string fuel_type;
	 	double price;
	 	float mileage;
	public:
		void setdata(string cname,string mname,string ftype,double p,float mil ){
		
		company_name=cname;
		 model_name=mname;
		 fuel_type=ftype;
		 price=p;
		 mileage=mil;
	}
		
		void displaydata()
		{
		
		cout<<"car properties" <<endl;
		cout<<"company name::"<<company_name<<endl;

		cout<<"car model name:: "<<model_name<<endl;
		cout<<"car fuel type:: "<<fuel_type<<endl;
		cout<<"car price::"<<price<<endl;
		cout<<"car mileage is:"<<mileage<<endl;
	}
	};
int main()
{
	cars car1;
	
	
	car1.setdata("mercedes","benz","petrol",120000,23.2);
	car1.displaydata();
	
	return 0;
	}	
		

