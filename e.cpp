#include<iostream>
using namespace std;
class Basicmaths
{
	public:
		int add(int x,int y)
		{
			return x+y;
			
	}
		};
int main()
{
	Basicmaths obj;
	int x=obj.add(10,20);
	cout<<x<<endl;
	return 0;
}

