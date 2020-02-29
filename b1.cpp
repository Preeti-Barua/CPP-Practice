#include<iostream>
using namespace std;
class Product
{
	public:
		void accept(string name,int pid, int price,string rating)
		{
			cout<<name<<pid<<price<<rating<<endl;
			
		}
};
int main()
{
	Product marker;
	
	string x,y;
	int a,b;
	cout<<"x"<<endl;
	cin>>x;
	cout<<"y"<<endl;
	cin>>y;
	cout<<"a"<<endl;
	cin>>a;
	cout<<"b"<<endl;
	cin>>b;
	marker.accept(x,a,b,y);
	return 0;
	
}
