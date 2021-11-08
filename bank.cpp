#include<iostream>
using namespace std;
class bank
{
	private:
		string name;
		int account_no;
		float bank_balance;

	public:
		void details()
		{
			cout<<"enter the details of the bank account holder:"<<endl;
			cout<<"name:"<<endl;
			cin>>name;
			cout<<"account number:"<<endl;
			cin>>account_no;
			cout<<"bank balance:"<<endl;
			cin>>bank_balance;
		}
		void show()
		{
			cout<<"the details of the bank acount holder"<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"account number:"<<account_no<<endl;
			cout<<"bank balance:"<<bank_balance<<endl;
		}
		void debit()
		{
			int amount;
			cout<<"enter amount:"<<endl;
			cin>>amount;
			if((bank_balance-amount)<500)
			cout<<"you must maintain minimum balance"<<endl;
			else
			bank_balance-=amount;
		}
		void credit()
		{
			int amount;
			cout<<"enter amount:"<<endl;
			cin>>amount;
			bank_balance+=amount;
		}
		
};
int main()
{
	bank b;
	b.details();
	b.show();
	char choice;
	cout<<"do you want to withdraw or deposit d/w"<<endl;
	cin>>choice;
	if(choice=='w')
	b.debit();
	else
	b.credit();
	b.show();
	return 0;
}
