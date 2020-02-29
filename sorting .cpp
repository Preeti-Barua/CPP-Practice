#include<iostream>
using namespace std;
int main()
{
	int size,temp,i,j;
	int *arr= new int [size];
	cout<<"enter the array size::::";
	cin>>size;
	cout<<"enter the elements::::";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
		
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"after sorting the number:::";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
	
}
