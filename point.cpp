#include<iostream>
using namespace std;
class point 
{
	public:
		point()
		{
			 cout<<"**************POINT CLASS**************"<<endl;
		}
		void dis_P()
		{
			 int p,l=2,b=3;
		                      p=2*(l+b);
		                      cout<<p;
		}
		void dis_A()
		{
			int A,l=3,b=4;
			A=l*b;
			cout<<A;
				
		}
};
class circle:public point 
{
	public:
		circle()
		{
			 cout<<"************** circle**************"<<endl;
		}
		void dis_P()
		{
			 int p,h=2,r=3;
		                      p=2*3.14*r*h;
		                      cout<<p;
		}
		void dis_A()
		{
			int A,r;
			A=3.14*r*r;
			cout<<A;
				
		}
};
class triangle:public point
{
	public:
		triangle()
		{
			 cout<<"************** triangle**************"<<endl;
		}
		void dis_P()
		{                     
		                     
			 int p,h=2,b=3;
		                      p=b*h/2;
		                      cout<<p;
		}
		void dis_A()
		{
			int A,a=1,b=2,c=3;
			A=a+b+c;
			cout<<A;
				
		}
};
int main()
{
	point p;
	p.dis_P();
	p.dis_A();
	circle c;
	c.dis_P();
	c.dis_A();
	triangle t;
	t.dis_A();
	t.dis_P();
	
	
}
