#include<stdio.h>
int main()
{
	int x=10;
	int *ptr;
	ptr=&x;
	printf("%d\n",ptr);
	ptr++;
	printf("%d\n",ptr);
	ptr=ptr-3;
	printf("%d\n",ptr);
	return 0;
	
}
