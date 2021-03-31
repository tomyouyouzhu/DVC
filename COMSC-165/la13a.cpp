//Objective:  la13a
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
#include <string>
using namespace std;

class Customer
{
	private:
	string name;
	string phone;
	string email;
	
	public:
	void setname(string);
	void setphone(string);
	void setemail(string);
	string getname() const;
	string getphone() const;
	string getemail() const;
};

void getinformation(Customer *);
void print(Customer );

int main() 
{
	Customer z;
	Customer *a=&z;
	getinformation(a);
	print(z);
}

void Customer::setname(string a)
{
	name=a;
}
void Customer::setphone(string a)
{
	phone=a;
}
void Customer::setemail(string a)
{
	email=a;
}
string Customer::getname() const
{
	return name;
}
string Customer::getphone() const
{
	return phone;
}
string Customer::getemail() const
{
	return email;
}
void getinformation(Customer *a)
{
	a->setname("John");
	a->setphone("987-654321");
	a->setemail("John@gmail.com");
}
void print(Customer a)
{
	cout<<"Customer:"<<endl;
	cout<<"Name: "<<a.getname()<<endl;
	cout<<"Phone: "<<a.getphone()<<endl;
	cout<<"Email: "<<a.getemail()<<endl;
}