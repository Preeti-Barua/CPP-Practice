#include<iostream>
using namespace std;
class Bank
{ 

	public:
		
		Bank()
		{
			cout<<"-----------------------------bank-----------------------------"<<endl;
		}
		void rateOI(int amt,int years,float ROI)
		
		{
		   float amount;
		   amount=amt*years*ROI;
		   cout<<"ROI:"<<amount;	
		}
	};
	
class SBI:public Bank
{
	public:
		SBI()
		{
			cout<<"--------------------------------SBI--------------------------"<<endl;
		}
		void rateOI(int amt,int years ,float ROI)
		{
		  float amount;
		   amount=amt*years*ROI;
		   cout<<"ROI:"<<amount;	
		}
		
};
class AXIS: public Bank
{
	public:
		AXIS()
		{
			cout<<"--------------------------------AXIS--------------------------"<<endl;
		}
		 void rateOI(int amt,int years ,float ROI)
		{
		
		  float amount;
		   amount=amt*years*ROI;
		   cout<<"ROI:"<<amount;	
		
		
		}
		
};

int main()
{
	Bank b;

	b.rateOI(1234,3,2.3);
	SBI s;
	s.rateOI(2345,3,1.2);
	AXIS a;
	a.rateOI(12345,2,3.3);
	return 0;
	
}
