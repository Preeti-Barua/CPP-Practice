#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n=3,ele,loc,i,arr[6];
//	arr[3] ={10,20,30};
	
	cout<<"enter the element to insert:";
	cin>>ele;
	cout<"enter the location to insert:";
	cin>>loc;
	for(i=n-1;i>=loc;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[loc]=ele;
	return 0;
}
