#include <iostream>
#include <string>
#include <sstream>
#include "kunming_zhu_HeartRates.h"
using namespace std;

HeartRates::HeartRates(string a, string b, int c, int d, int e): firstName{a}, lastName{b}, birthMonth{c}, birthDay{d}, birthYear{e}{}
void HeartRates::getAge()
{
	int a,b,c,age;
	cout<<"Please enter today's month, day, and year: "<<endl;
	cin>>a>>b>>c;
	if (c>birthYear && a>=birthMonth && b>=birthDay)
	{
		age=c-birthYear;
	}
	else 
	{
		age=c-birthYear-1;
	}
	currentMonth=a;
	currentDay=b;
	currentYear=c;
	ages=age;
}
int HeartRates::getMaxiumHeartRate()
{
	return 220-ages;
}
string HeartRates::getTargetHeartRate()
{
	ostringstream os;
	int a=0.5*getMaxiumHeartRate();
	int b=0.85*getMaxiumHeartRate();
	os<<a<<"-"<<b;
	string rate=os.str();
	return rate;
}
void HeartRates::setFirstName(string a)
{
	firstName=a;
}
string HeartRates::getFirstName() const
{
	return firstName;
}
void HeartRates::setLastName(string a)
{
	lastName=a;
}
string HeartRates::getLastName() const
{
	return lastName;
}
void HeartRates::setBirthMonth(int a)
{
	birthMonth=a;
}
int HeartRates::getBirthMonth() const
{
	return birthMonth;
}
void HeartRates::setBirthDay(int a)
{
	birthDay=a;
}
int HeartRates::getBirthDay() const
{
	return birthDay;
}
void HeartRates::setBirthYear(int a)
{
	birthYear=a;
}
int HeartRates::getBirthYear() const
{
	return birthYear;
}