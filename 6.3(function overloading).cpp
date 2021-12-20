#include<iostream>
using namespace std;
class date
{
	public:
		void show(int dd,int mm,int yy)
		{
			cout<<"current date:"<<endl;
			cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
		void show(int dd,string mm,int yy)
		{
			cout<<"current date:"<<endl;
			cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
};
int main()
{
	date d;
	d.show(3,8,2002);
	d.show(3,"August",2002);
	return 0;
}
