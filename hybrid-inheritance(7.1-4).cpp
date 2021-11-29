#include<iostream>
using namespace std;
class student
{
	protected:
		string name;
		string branch;
		void getst()
		{
			cout<<"enter name and branch:"<<endl;
			cin>>name>>branch;
		}
		void showst()
		{
			cout<<"name="<<name<<endl;
			cout<<"branch="<<branch<<endl;
		}
};
class marks:public student
{
	protected:
		int m1,m2,m3,m4;
		int pinno;
		void getm()
		{
			cout<<"enter the student marks:"<<endl;
			cin>>m1>>m2>>m3>>m4;
			cout<<"enter pinno:"<<endl;
			cin>>pinno;
		}
		void showm()
		{
			cout<<"pin no.="<<pinno<<endl;
		}
};
class project
{
	protected:
		int ip,ep;
		void getpro()
		{
			cout<<"enter internal project marks:"<<endl;
			cin>>ip;
			cout<<"enter external project marks:"<<endl;
			cin>>ep;
		}
};
class percentage:public marks,public project
{
	private:
		float per;
	public:
		void result()
		{
			getst();
			getm();
			getpro();
			per=(float)(m1+m2+m3+m4+ip+ep)/6;
			showst();
			showm();
			cout<<"percentage="<<per<<endl;
		}
};
int main()
{
	percentage p;
	p.result();
	return 0;
}
