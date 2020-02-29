#include<iostream>
using namespace std;
class shape
{
	public:
		int a,b;
	public:
	                void display(int n,int m)
	                {
	                	a=n;
	                	b=m;
	                }
		
		
};
class Rect  :public shape
{
	public:
		void calarea()
		
		{                    
		
			
			int c;
			c= a*b;
			
			cout<<c<<endl;
		}
		void display()
		{
			cout<<"enter a &b:::";
			cin>>a>>b;
		}
					
					
};
class Triangle:public shape
{
	public:
		void calareaTri()
		{
			int r;
			r=0.5*a*b;
			cout<<r;
		}
		
		
};
int main()
{
	
	Rect r;
	r.calarea();
	r.display();
	Triangle t;
	t.calareaTri();
	return 0;
	
}

