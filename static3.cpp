#include<iostream>
using namespace std;
class Demo1
{
	public:
		static void counter()
		{
			int x=0;
			x++;
			cout<<x++<<endl;
		}
};
int main()
{
	Demo1::counter();
	Demo1::counter();
	
	for(int i=0;i<=5;i++)
	{
		Demo1::counter();
	}
	return 0;
}
