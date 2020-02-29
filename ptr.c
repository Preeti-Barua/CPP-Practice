#include<Stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	 int n,*ptr,i;
	 printf("enter n:");
	 scanf("%d",&n);
	 ptr=(int*)calloc(n*sizeof(int));
	 //printf("%d\n",ptr);
	 if(ptr==NULL)
	 {
	 	printf("sorry");
	 	exit(0);
	 	
	 }
	 printf("enter elements:");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",ptr+i);
	 }
}
