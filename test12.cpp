
#include<iostream>
using namespace std;

int main()
{
   int count=0,n,i;
   cout<<"enter any number:";
   cin>>n;
   for(i=2;i<n;i++)
   {
   	if(n%i==0)
   	{
   		count++;
   		
	   }
	   if(count==2)
	   {
	   	cout<<"not  prime";
	   }
	    else
	    {
	    	cout<<" prime";
	    }
	   }
             
}


   
   	
   
   	

