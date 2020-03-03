#include<iostream>
int main()
{
	int h,a,b,count=1,gcd;
	std::cout<<"enter the two numbers::";
	std::cin>>a>>b;
	h=a<b?a:b;
	while(count<=h)
	{
		if((a%count==0)&&(b%count==0))
		{
			gcd=count;
		}
		count++;
		
	}

	std::cout<<gcd;
	return 0;
}
