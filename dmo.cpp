#include<iostream>
using namespace std;
class Test
{
	private:
		int x;
	public:
		Test ():x(10)
		{
			
		}
	void operator --()
	{
		x=x-2;
	}
	void display()
	{
		cout<<x<<endl;
	}

};
int main()
{             
                     
	Test t1;
	Test t2;
	t1+t2
	--t;
	t.display();
	
}
