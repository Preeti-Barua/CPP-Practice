#include<iostream>
using namespace std;
int  main()
{
	int numbers,size;
	int i,se;
	int *arr=new int [size];
	cout<<"enter the array size::::";
	cin>>size;
	
	cout<<"enter the elements:::";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter element:";
	cin>>se;
	for(i=0;i<size;i++)
	{
		if(arr[i]==se)
		{
			cout<<"element found"<<endl;
			return 0;
			
		}
		
	}
	
                   cout<<"element not found";
	
}
