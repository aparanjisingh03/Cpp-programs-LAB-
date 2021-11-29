#include<iostream>
using namespace std;
class A
{
	public:
		void showA()
		{
			cout<<"method of class A"<<endl;
		}
};
class B:virtual public A
{
	public:
		void showB()
		{
			cout<<"method of class B"<<endl;
		}
};
class C:virtual public A
{
	public:
		void showC()
		{
			cout<<"method of class C"<<endl;
		}
};
class D:public B,public C
{
	public:
		void showD()
		{
			cout<<"method of class D"<<endl;
		}
};
int main()
{
	D d;
	d.showA();
	d.showB();
	d.showC();
	d.showD();
	return 0;  
}
