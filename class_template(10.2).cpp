#include<iostream>
using namespace std;
template<class T>
class sample
{
	private:
		T x,y;
	public:
		void get()
		{
			cout<<"enter x,y values:"<<endl;
			cin>>x>>y;
		}
		void add()
		{
			cout<<x+y<<endl;
		}
};
int main()
{
	sample <int>s1;
	cout<<"enter integer values:"<<endl;
	s1.get();
	s1.add();
	sample <char>s2;
	cout<<"enter character data:"<<endl;
	s2.get();
	s2.add();
	return 0;
}
