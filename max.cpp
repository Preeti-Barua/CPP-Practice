#include<iostream>
using namespace std;
class great
{
	public:
		int max(int a,int b)
		
		{  
		   if (a>b)
		   {
		   	return a;
		   }
		   else
		   {
		   	return b;
		   }
		   
		}
			
		
		
		int max(int a,int b,int c)
		{
			if((a>b)&&(a>c))
			{
				return a;
			}
				if((b>a)&&(b>c))
			{
				return b;
			}
				if((c>a)&&(c>b))
			{
				return c;
			}
		}
		
	};
int main()
{
	great g1;
	great g2;
	int a,b,c;
	cout<<"enter a::::";
	cin>>a;
	cout<<"enter b:::::";
	cin>>b;
	cout<<"enter c:::::";
	cin>>c;
	int y=g2.max(a,b);
                    int x=g1.max(a,b,c);
	cout<<x<<endl;
	cout<<y;
	}
	
	

		
		

