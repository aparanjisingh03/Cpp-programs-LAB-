#include<iostream>
using namespace std;
class box
{
	private:
		float length,breadth,height;
	public:
		void get()
		{
			cout<<"enter the values of dimensions:";
			cin>>length>>breadth>>height;
		}
		void volume()
		{
			cout<<"the volume of the box="<<length*breadth*height;
		}
};
int main()
{
	box b;
	b.get();
	b.volume();
	return 0;
}
