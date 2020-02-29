#include<iostream>
using namespace std;
class Test
{
	public:
		int x;
		public:
			Test()
			{
			}
				Test(int i)
				{
					x=i;
				}
				void operator +(Test t);
			
};
void Test :: operator + (Test a)
{
	int r= x+a.x;
	cout<<r;
};
int main()
{
	Test t1=Test(10);
	Test t2=Test(20);
	t1+t2;
}
