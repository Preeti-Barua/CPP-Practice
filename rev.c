#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 100
void main()
{  int arr[MAX_SIZE];
   int i,size,even,odd;
   printf("enter the size of the array:");
   scanf("%d",&size);
   printf("enter %d elements in array%d",size);
   for(i=0;i<=size;i++)
   {
   	 scanf("%d",&arr[i]);
   	 
   }
   even=0;
   odd=0;
   for(i=1;i<size;i++)
   {
   	if(arr[i]%2==0)
   	{
   		even++;
   		
	   }
	else
	{
		odd++;
	   }   
   }
printf("total even elements:%d\n",even);


printf("total odd elements:%d\n",odd);

getch();

}

