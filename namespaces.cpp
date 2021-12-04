#include<iostream>
using namespace std;
int a=10;
int main()
{
	int a=100;
	cout<<"the value of local variable a="<<a<<endl;
	cout<<"the value of global variable a="<<::a;
	return 0;
}
