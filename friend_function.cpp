#include<iostream>
using namespace std;
class sum
{
	private:
		int num1,num2;
	public:
		void get()
		{
			cout<<"enter the values:";
			cin>>num1>>num2;
		}
	friend void result(sum &s);
};
void result(sum &s)
{
	cout<<"the sum is:"<<s.num1+s.num2;
}
int main()
{
	sum s;
	s.get();
	result(s);
	return 0;
}
