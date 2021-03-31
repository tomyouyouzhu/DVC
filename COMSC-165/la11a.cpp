//Objective:  la11a
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
#include <string>
using namespace std;

struct Customer
{
	string name;
	string phone;
	string email;
};

void print(Customer a);

int main() 
{
	Customer a={"TT", "876-9087", "yuy@yahoo.com"};
	Customer b={"TTr", "874-9237", "tenr@yahoo.com"};
	Customer c={"TTt", "873-9111", "opiu@yahoo.com"};
	/*
	cout<<"Customer 1:"<<endl;
	cout<<"Name: "<<a.name<<endl;
	cout<<"Phone: "<<a.phone<<endl;
	cout<<"Email: "<<a.email<<endl;
	cout<<endl;
	cout<<"Customer 2:"<<endl;
	cout<<"Name: "<<b.name<<endl;
	cout<<"Phone: "<<b.phone<<endl;
	cout<<"Email: "<<b.email<<endl;
	cout<<endl;
	cout<<"Customer 3:"<<endl;
	cout<<"Name: "<<c.name<<endl;
	cout<<"Phone: "<<c.phone<<endl;
	cout<<"Email: "<<c.email<<endl;
	*/
	cout<<"Customer 1:"<<endl;
	print(a);
	cout<<"Customer 2:"<<endl;
	print(b);
	cout<<"Customer 3:"<<endl;
	print(c);	
}

void print (Customer a)
{
	cout<<"Name: "<<a.name<<endl;
	cout<<"Phone: "<<a.phone<<endl;
	cout<<"Email: "<<a.email<<endl;
	cout<<endl;
}