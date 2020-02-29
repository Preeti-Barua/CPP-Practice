#include<iostream>
using namespace std;
int main()
{
	int size,sum=0;
	int *arr=new int [size];
	cout<<"enter the size of array::";
	 cin>>size;
	cout<<"enter the element:::";
	for(int i=0;i<size;i++)
	{
	      cin>>arr[i];	
	}
	
	for(int i=0;i<size;i++)
	{ 
	      sum=sum+arr[i];	
	}
	cout<<"sum is:"<<sum<<endl;

	delete arr;
	return 0;

	
}

