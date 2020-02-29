#include<iostream>
using namespace std;
void main()
{
	int a[2][2]={{1,2},{2,2}},
                    int b[2][2]={{2,3},{3,4}};
	
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			
			cin<<a[i][j];
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin<<b[i][j];
			
			
		}
	} 
	
	cout<<"sum is:";
	sum=a[i][j]+b[i][j];
	for(int i=0;i<2;i++)
	{ 
		for(int j=0;j<2;j++)
		{
			cout<<sum;
		}
	} 
}

		



