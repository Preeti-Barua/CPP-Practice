#include<iostream>
using namespace std;
int main()
{
	int i,j,sum=0,n;
	cout<<"enter the value n:::"<<endl;
	cin>>n;	
	for(i=1;i<n;i=i+2)
	{
		j=i+2;
		sum+=(i*j);
		
	}
	cout<<sum;
	return 0;
}
