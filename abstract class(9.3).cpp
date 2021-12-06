#include<iostream>
using namespace std;
class shapes
{
	public:
		virtual void area()=0;
};
class square:public shapes
{
	private:
		int a;
	public:
		square()
		{
			cout<<"enter length of a side:";
			cin>>a;
		}
		void area()
		{
			cout<<"area of the square:"<<a*a<<endl;
		}
};
class circle:public shapes
{
	private:
		int r;
	public:
		circle()
		{
			cout<<"enter radius:";
			cin>>r;
		}
		void area()
		{
			cout<<"area of the circle:"<<3.14*r*r<<endl;
		}
};
class rectangle:public shapes
{
	private:
		int l,b;
	public:
		rectangle()
		{
			cout<<"enter length and breadth:";
			cin>>l>>b;
		}
		void area()
		{
			cout<<"area of the rectangle:"<<l*b<<endl;
		}
};
class triangle:public shapes
{
	private:
		int b,h;
	public:
		triangle()
		{
			cout<<"enter base and height:";
			cin>>b>>h;
		}
		void area()
		{
			cout<<"area of the triangle:"<<0.5*b*h;
		}
};
int main()
{
	square s,*sptr;
	sptr=&s;
	sptr->area();
	circle c,*cptr;
	cptr=&c;
	cptr->area();
	rectangle r,*rptr;
	rptr=&r;
	rptr->area();
	triangle t,*tptr;
	tptr=&t;
	tptr->area();
	return 0;
}
