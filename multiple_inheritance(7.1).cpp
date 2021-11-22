#include<iostream>
using namespace std;
class Area
{
	protected:
		void calarea(int l,int b)
		{
			cout<<"area of the rectangle="<<l*b<<endl;
		}
};
class perimeter
{
	protected:
		void calperimeter(int l,int b)
		{
			cout<<"perimeter of a rectangle="<<2*(l+b);
		}
};
class rectangle:public Area,public perimeter
{
	public:
		int l,b;
		void result()
		{
			cout<<"enter l,b value:";
			cin>>l>>b;
			calarea(l,b);
			calperimeter(l,b);
		}
};
int main()
{
	rectangle r;
	r.result();
	return 0;
}

