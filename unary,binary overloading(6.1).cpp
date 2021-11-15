#include<iostream>
using namespace std;
class complex
{
	private:
		int x,y;
		int real,imag;
	public:
		complex()
		{
			x=10;
			y=20;
		}
		void operator -()
		{
			x=-x;
			y=-y;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
		void getdata()
		{
			cout<<"enter real and imaginary parts:"<<endl;
			cin>>real>>imag;
		}
		void operator +(complex &c2)
		{
			cout<<real+c2.real<<"+"<<imag+c2.imag<<"i"<<endl;
		}
};
int main()
{
	complex c1,c2,s;
	-s;
	c1.getdata();
	c2.getdata();
	c1+c2;
	s.show();
	return 0;
}
