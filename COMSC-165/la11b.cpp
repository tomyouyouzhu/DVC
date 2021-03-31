//Objective:  la11b
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
using namespace std;

struct Customer
{
	string name;
	string phone;
	string email;
};

Customer getCustomer(Customer);
void printCustomer(Customer&);

int main() 
{
	Customer a;
	a=getCustomer(a);
	cout<<endl;
	cout<<"You entered: "<<endl;
	cout<<endl;
	printCustomer(a);
}

Customer getCustomer(Customer z)
{
	cout<<"Enter the name: ";
	getline(cin,z.name);
	cout<<"Enter the phone number: ";
	getline(cin,z.phone);
	cout<<"Enter the email address: ";
	getline(cin,z.email);
	return z;
}
void printCustomer(Customer& a)
{
	cout<<"Name: "<<a.name<<endl;
	cout<<"Phone: "<<a.phone<<endl;
	cout<<"Email: "<<a.email<<endl;
	cout<<endl;
}