//Objective:  hw03
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
	string name1,name2,name3;
	double number1,number2,number3,ave;
	cout<<"Enter the name of the fist month and rainfall in inches: ";
	cin>>name1>>number1;
	cout<<"Enter the name of the second month and rainfall in inches: ";
	cin>>name2>>number2;
	cout<<"Enter the name of the third month and rainfall in inches: ";
	cin>>name3>>number3;
	ave=(number1+number2+number3)/3;
	cout.setf(ios::fixed);
	cout<<setprecision(2);
	cout<<"The average rainfall for "<<name1<<", "<<name2<<", "<<name3<<" is "<<ave<<" inches."<<endl;
}