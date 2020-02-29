#include<stdio.h>
#include<conio.h>
#include<string.h>
void matrix();
void main()
{
	matrix();
}
void matrix()
{
	  int a[2][2]={{1,1},{2,2}};
	  int b[2][2]={{1,1},{2,2}};
	  int c[2][2];
	  int i,j;
	  for(i=0;i<=2;i++)
	  {
	  	for(j=0;j<=2;j++)
	  	{
	  		 c[i][j]=a[i][j]+b[i][j];
	  		 printf("%d",c[i][j]);
		  }
	  }
	  
	  
	  
}
