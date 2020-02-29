#include<iostream>
using namespace std;
class s
{
	public:
		void checkQty(int Qty)
		{
			try
			{
				if(Qty<=0)
				throw "not allowed";
				cout<<"ok";
			}
			catch(const char* e)
			{
				cout<<e;
			}
		}
		

};
int main()
{
	s obj;
	int x;
	cout<<"enter x";
	cin>> x;
	obj.checkQty(x);
	return 0;
}
