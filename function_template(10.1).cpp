#include<iostream>
using namespace std;
template<typename T>
void cube(T x)
{
	cout<<x*x*x<<endl;
}
int main()
{
	cube(3);
	cube(1.4);
	return 0;
}

