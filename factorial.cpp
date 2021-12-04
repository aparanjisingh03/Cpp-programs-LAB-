#include<iostream>
using namespace std;
int fact(int n)
{
	if(n>1)
	return n*fact(n-1);
	else
	return 1;
}
int main()
{
	int n;
	cout<<"enter the number:";
	cin>>n;
	cout<<"factorial is:"<<endl<<fact(n);
	return 0;
}
