#include <iostream>
#include <string>
#include <sstream>
#include "kunming_zhu_HeartRates.h"
using namespace std;

HeartRates::HeartRates(string a, string b, int c, int d, int e, char f, double h, double w): firstName{a}, lastName{b}, birthMonth{c}, birthDay{d}, birthYear{e}, gender{f}, height{h}, weight{w}{}
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
void HeartRates::setBmi()
{
	bmi=(weight*703)/(height*height);
}
double HeartRates::getBmi() const
{
	return bmi;
}
void HeartRates::setHeight(double a)
{
	height=a;
}
double HeartRates::getHeight() const
{
	return height;
}
void HeartRates::setWeight(double a)
{
	weight=a;
}
double HeartRates::getWeight() const
{
	return weight;
}
void HeartRates::setGender(char a)
{
	gender=a;
}
char HeartRates::getGender() const
{
	return gender;
}
void HeartRates::showBmiValues() const
{
	cout<<"BMI VALUES"<<endl;
	cout<<"Underweight:"<<"less than 18.5"<<endl;
	cout<<"Normal: "<<"between 18.5 and 24.9"<<endl;
	cout<<"Overweight: "<<"between 25 and 29"<<endl;
	cout<<"Obese: "<<"30 or greater"<<endl;
}