#include<stdio.h>
int main()
{
	 int sum=0, add=0;
	 int n=1743;
	 int r;
	 int f=1;
	 while(f<=2)
	 {
	 
	 r= n%10;
	 sum=sum*10+r;
	 
	 
	 add= add+sum;

	  
     	n=n/10;
	    sum=0;
	    f++;
	}

	
	 
	 
	 printf("%d",add);
}
