#include<stdio.h>
#include<conio.h>
void sum(int *a,int *b);
void main()
{
	   int a=10,b=20;
	   sum(&a,&b);
	   
}
void sum(int *a,int *b)
{
	int c=*a+*b;
	printf("%d\n",c);
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",&a);
	printf("%d\n",&b);
	printf("%d\n",*a);
	printf("%d\n",*b);
}
