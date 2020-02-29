#include<Stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	 int n,*ptr;
	 printf("whatever:");
	 scanf("%d",&n);
	 ptr=(int*)malloc(n*sizeof(int));
	 printf("%d",ptr);
}
