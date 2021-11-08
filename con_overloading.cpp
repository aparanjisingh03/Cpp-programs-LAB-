#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length,breadth;
	public:
		rectangle()
		{
			length=10;
			breadth=20;
		}
		rectangle(int l,int b)
		{
			length=l;
			breadth=b;
		}
		rectangle(int x)
		{
			length=x;
			breadth=x;
		}
		void area()
		{
			cout<<"area of the rectangle="<<length*breadth<<endl;
		}
};
int main()
{
	rectangle r1;
	rectangle r2(10,10);
	rectangle r3(5);
	r1.area();
	r2.area();
	r3.area();
	return 0;
}
