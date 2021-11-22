#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"class A constructor"<<endl;
		}
		~A()
		{
			cout<<"class A destructor"<<endl;
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"class B constructor"<<endl;
		}
		~B()
		{
			cout<<"class B destructor"<<endl;
		}
};
class C:public A
{
	public:
		C()
		{
			cout<<"class C constructor"<<endl;
		}
		~C()
		{
			cout<<"class C destructor"<<endl;
		}
};
class D:public B,public C
{
	public:
		D()
		{
			cout<<"class D constructor"<<endl;
		}
		~D()
		{
			cout<<"class D destructor"<<endl;
		}
};
int main()
{
	D d;
	return 0;
}
