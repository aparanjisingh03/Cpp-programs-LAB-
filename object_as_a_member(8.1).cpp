#include<iostream>
using namespace std;
class DOB
{
	private:
		int dd,mm,yy;
	public:
		void show()
		{
			cout<<"enter day,month and year:";
			cin>>dd>>mm>>yy;
			cout<<"date of birth="<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
};
class student
{
	private:
		string name;
		int pinno;
		DOB d;
	public:
		void display()
		{
			cout<<"enter name and pinno:";
			cin>>name>>pinno;
			d.show();
			cout<<"name="<<name<<endl;
			cout<<"pinno="<<pinno<<endl;
		}
};
int main()
{
	student s;
	s.display();
	return 0;
}
