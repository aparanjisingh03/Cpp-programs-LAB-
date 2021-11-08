#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length,breadth;
	public:
		rectangle()
		{
			cout<<"enter the values of length and breadth:";
			cin>>length>>breadth;
		}
		void area()
		{
			cout<<"area of the rectangle="<<(length*breadth);
		}
};
int main()
{
	rectangle r;
	r.area();
	return 0;
}
