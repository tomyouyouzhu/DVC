#include <iostream>
#include <string>
#include "kunming_zhu_HeartRates.h"
using namespace std;

int main()
{
	string a,b;
	int c,d,e;
	cout<<"Please enter first and last name (separated by spaces):"<<endl;
	cin>>a>>b;
	cout<<"Please enter month, day and year of birth (separated by spaces):"<<endl;
	cin>>c>>d>>e;
	HeartRates account{a,b,c,d,e};
	cout<<"First name: "<<account.getFirstName()<<endl;
	cout<<"Last name: "<<account.getLastName()<<endl;
	cout<<"Date of Birth: "<<account.getBirthMonth()<<"/"<<account.getBirthDay()<<"/"<<account.getBirthYear()<<endl;
	account.getAge();
	cout<<"Age: "<<account.ages<<endl;
	cout<<"Maxumum Heart Rate: "<<account.getMaxiumHeartRate()<<endl;
	cout<<"Target Heart Rate: "<<account.getTargetHeartRate()<<endl;
}