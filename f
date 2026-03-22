#include<iostream>
using namespace std;

class BankAccount
{
	private:
		int balance;
	public:
		BankAccount(int x)
		{
			balance=x;
		}
	friend class AccountManager;
};

class AccountManager
{
	public:
    void display(BankAccount s)
	{
		cout<<"Balance:"<<s.balance<<endl;
		
	}
	void add(BankAccount s,int a)
	{
		int t;
		t=s.balance+a;
		cout<<"updated balance:"<<t<<endl;
	}
	void sub(BankAccount s,int y)
	{
		int T;
		T=s.balance-y;
		cout<<"updated balance:"<<T<<endl;
	}
};

int main()
{
    BankAccount A(500000);
    AccountManager S;
    S.display(A);
    S.add(A,40000);
    S.sub(A,30000);
	return 0;
}









