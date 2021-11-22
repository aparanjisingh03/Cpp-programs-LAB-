#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	public:
		void get()
		{
			cout<<"enter x:";
			cin>>x;
		}
};
class B:public A
{
    public:
		void cube()
		{
			cout<<"cube="<<x*x*x;
		}
};
int main()
{
   B b;
   b.get();
   b.cube();
   return 0;	
}
