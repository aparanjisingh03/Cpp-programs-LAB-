#include<iostream>
using namespace std;
class sample
{
	private:
		int x;
	public:
		sample(sample &s)
		{
			x=s.x;
		}
		sample()
		{
			cout<<"enter x:";
			cin>>x;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
		}
};
int main()
{
	sample s1;
	s1.show();
	sample s2(s1);
	s2.show();
	return 0;
}
