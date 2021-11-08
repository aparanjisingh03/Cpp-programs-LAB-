#include<iostream>
using namespace std;
void interest(int p=10,int t=20,int r=10)
{
	cout<<"simple interest="<<(p*t*r)/100<<endl;
}

int main()
{
	int p,t,r;
	cout<<"enter the values:";
	cin>>p>>t>>r;
	interest(p,t,r);
	interest(p);
	interest(p,t);
	interest();
	return 0;
}

