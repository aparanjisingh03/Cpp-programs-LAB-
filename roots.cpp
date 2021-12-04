#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,dis,r1,r2;
	cout<<"enter the coefficients:";
	cin>>a>>b>>c;
	dis=(b*b-(4*a*c));
	if(dis>0)
	{
		cout<<"roots are real"<<endl;
		r1=(-b+sqrt(dis))/2*a;
		r2=(-b-sqrt(dis))/2*a;
		cout<<"the roots are"<<r1<<endl<<r2;
	}
	else if(dis==0)
	{
		cout<<"roots are equal"<<endl;
		r1=-b/(2*a);
		cout<<"the roots are"<<r1<<endl<<r1;
	}
	else
	{
		cout<<"the roots are imaginary";
	}
	return 0;
}
