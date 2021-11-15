#include<iostream>
using namespace std;
class sample
{
	private:
		int x,y;
	public:
		sample()
		{
			x=10;
			y=20;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
	friend void operator -(sample &s);
};
void operator -(sample &s)
{
	s.x=-s.x;
	s.y=-s.y;
}
int main()
{
	sample s;
	-s;
	s.show();
	return 0;
}
