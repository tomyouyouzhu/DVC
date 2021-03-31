//Objective:  
//Name: Kunming Zhu
//Course: COMSC-

#include <iostream>
using namespace std;

class Account
{
	private:
		string name;
		int number;
	public:
		Account(string x, int y):name{x},number{y}{}
		Account(string x):name{x}{}
		Account(int y):number{y}{}
		void setname(string x)
		{
			name=x;
		}
		void setnumber(int y)
		{
			number=y;
		}
		string getname()
		{
			return name;
		}
		int getnumber()
		{
			return number;
		}
};

class Bank
{
	private:
	string name;
	double balance;
	public:
	Bank(string x , double y) :
};

int main() 
{
	Account n{"James"};
	Account m{100};
	Account v{"James", 100};
	cout<<n.getname()<<endl;
	n.setnumber(100);
	cout<<n.getnumber()<<endl;
}