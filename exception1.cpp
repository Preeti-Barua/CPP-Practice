#include<iostream>
using namespace std;
class Demo
{
	public:
		void m1()
		{
			int arr[]={10,20,30,40};
			cout<<arr[10]<<endl;
		}
};
int main()
{
	Demo obj;
	obj.m1();
	return 0;
}
