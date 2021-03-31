#include <iostream>
#include <string>
#include "kunming_zhu_HeartRates.h"
using namespace std;

int main()
{
	string a,b;
	int c,d,e;
	char f;
	double h,w;
	cout<<"Please enter first and last name (separated by spaces):"<<endl;
	cin>>a>>b;
	cout<<"Please enter gender (M or F): "<<endl;
	cin>>f;
	cout<<"Please enter height (in inches) and weight (in pounds): "<<endl;
	cin>>h>>w;
	cout<<"Please enter month, day and year of birth (separated by spaces):"<<endl;
	cin>>c>>d>>e;
	HeartRates account{a,b,c,d,e,f,h,w};
	cout<<"First name: "<<account.getFirstName()<<endl;
	cout<<"Last name: "<<account.getLastName()<<endl;
	cout<<"Gender: "<<account.getGender()<<endl;
	cout<<"Date of Birth: "<<account.getBirthMonth()<<"/"<<account.getBirthDay()<<"/"<<account.getBirthYear()<<endl;
	cout<<"Height (inches): "<<account.getHeight()<<endl;
	cout<<"Weight (poinds): "<<account.getWeight()<<endl;
	account.getAge();
	account.setBmi();
	cout<<"Age: "<<account.ages<<endl;
	cout<<"Maxumum Heart Rate: "<<account.getMaxiumHeartRate()<<endl;
	cout<<"Target Heart Rate: "<<account.getTargetHeartRate()<<endl;
	cout<<"Body mass index: "<<account.getBmi()<<endl;
	cout<<endl;
	account.showBmiValues();
}