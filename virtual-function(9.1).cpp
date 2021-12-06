#include<iostream>
using namespace std;
class student
{
	private:
		string name;
		int pinno;
	public:
		void get()
		{
			cout<<"enter name and pinno:";
			cin>>name>>pinno;
		}
		virtual void show()
		{
			cout<<"student name="<<name<<endl;
			cout<<"student pinno="<<pinno<<endl;
		}
};
class details:public student
{
	private:
		string college;
		float percentage;
	public:
	    details()
		{
			cout<<"enter college and percentage:";
			cin>>college>>percentage;
		}
		void show()
		{
			cout<<"college="<<college<<endl;
			cout<<"percentage="<<percentage<<endl;
		}
};
int main()
{
	student s,*sptr;
	sptr=&s;
	sptr->get();
	details d,*dptr;
	dptr=&d;
	sptr->show();
	dptr->show();
	return 0;
}
