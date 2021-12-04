#include<iostream>
using namespace std;
class sample
{
	public:
		void display(int x)
		{
			cout<<"x="<<x<<endl;
		}
		void display(float y)
		{
			cout<<"y="<<y<<endl;
		}
		void display(double z)
		{
			cout<<"z="<<z<<endl;
		}
		void display(int a,int b)
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
		void display(int m,float n)
		{
			cout<<"m="<<m<<endl;
			cout<<"n="<<n<<endl;
		}
};
int main()
{
	sample s;
	s.display(3.786f);
	s.display(290);
	s.display(36.90);
	s.display(45,90);
	s.display(60,98.76f);
	return 0;
}
