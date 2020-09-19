#include<stdio.h>
int main()
{
	int i,j,n,s;
	int a[100];
	int temp;
	printf("Enter the no. of elements:");
	scanf("%s",&s);
	printf("Enter the array elements:");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
