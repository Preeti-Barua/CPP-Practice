#include<stdio.h>
#include<conio.h>
void inc(int x);
void inc(int x)
{
	x++;
	printf("inside function");
	printf("%d\n",x);
	
}void main()
{
	int x=100;
	inc(x);
	
	printf("  after  function %d\n",x);
	
}
