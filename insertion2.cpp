#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[100];
	int size,loc,n,ele;
	cout<<"enter the of  elements to insert::::"<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	
	{
		cin>>arr[i];
	}
	cout<<"enter element to insert:::::"<<endl;
	
	cin>>ele;
	cout<<"enter location to insert:::::"<<endl;
	cin>>loc;
	for(int i=n-1;i>=loc;i--)
	{
		arr[i+1]=arr[i];
	}
arr	[loc]=ele;
	size++;
	cout<<"the  new array is:" <<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
	return 0;
	
}
