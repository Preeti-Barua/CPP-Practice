#include<iostream>
using namespace std;
int main()
{
	char ch[100];
	cout<<"enter anything:::::::";
	cin>>ch;
	int c=0;
	int d=0;
	int s=0;
	
	
	
	int i;
	
	for ( i=0;ch[i]!='\0';i++)
	{
		if ((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
		{
		
		c++;
	                    }
	                    else if((ch[i]>='0'&&ch[i]<='9'))
	                    {
	                    d++;	
		}
		else
		{
			s++;
		}
	                    
	                  //  cout<<"char"<<c;
		
	}
	
	cout<<"char: "<<c<<endl;
	cout<<"digit: "<<d<<endl;
	cout<<"symbols: "<<s; 
	
	
	
	
	
	
	return 0;
}
