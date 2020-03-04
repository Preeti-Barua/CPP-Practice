#include<iostream>
int main()
{
	int n,a;
	std::cout<<"enter the number::";
	std::cin>>n;
	a=n*2;
	if(a%10==0)
	{
		std::cout<<a;
	
	}
	else
	{
	                  std::cout<<"-1";
	}
	return 0;
}
