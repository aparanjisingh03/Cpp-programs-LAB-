#include<iostream>
using namespace std;
class add
{
	private:
		int x,y;
	public:
		add()
		{
			cout<<"enter two numbers:";
			cin>>x>>y;
		}
		void result()
		{
			cout<<"the sum of two numbers:"<<x+y<<endl;
		}
};
int main()
{
	add a,*aptr;
	aptr=&a;
	aptr->result();
	return 0;
}
