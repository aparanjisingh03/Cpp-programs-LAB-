#include<iostream>
using namespace std;
class person
{
	protected:
		string name;
		int age;
		char gender;
		void getp()
		{
			cout<<"enter name:"<<endl;
			cin>>name;
			cout<<"enter age:"<<endl;
			cin>>age;
			cout<<"enter gender:"<<endl;
			cin>>gender;
		}
		void showp()
		{
			cout<<"name="<<name<<endl;
			cout<<"age="<<age<<endl;
			cout<<"gender="<<gender<<endl;
		}
};
class student:public person
{
	private:
		int roll_no;
		string college;
	public:
		void getst()
		{
			getp();
			cout<<"enter roll_no:"<<endl;
			cin>>roll_no;
			cout<<"enter college:"<<endl;
			cin>>college;
		}
		void showst()
		{
			showp();
			cout<<"roll_no="<<roll_no<<endl;
			cout<<"college="<<college<<endl;
		}
};
class employee:public person
{
	private:
		int eid;
		float salary;
	public:
		void gete()
		{
			getp();
			cout<<"enter employee id:"<<endl;
			cin>>eid;
			cout<<"enter salary:"<<endl;
			cin>>salary;
		}
		void showe()
		{
			showp();
			cout<<"employee id="<<eid<<endl;
			cout<<"salary="<<salary<<endl;
		}
};
int main()
{
	student s;
	s.getst();
	s.showst();
	employee e;
	e.gete();
	e.showe();
	return 0;
}
