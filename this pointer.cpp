#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length,breadth;
	public:
		rectangle(int length,int breadth)
		{
			this->length=length;
			this->breadth=breadth;
		}
		void area()
		{
			cout<<"area of the recatngle="<<length*breadth;
		}
};
int main()
{
	rectangle r(10,20);
	r.area();
	return 0;
}
