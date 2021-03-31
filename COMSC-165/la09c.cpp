//Objective:  la09c
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <memory>
#include <iostream>
using namespace std;

int main() 
{
	unique_ptr<int> a(new int);
	unique_ptr<int> b(new int);
	unique_ptr<int> c(new int);
	unique_ptr<double> d(new double);
	unique_ptr<double> e(new double);
	cout<<"Enter the first number: ";
	cin>>*a;
	cout<<"Enter the second number: ";
	cin>>*b;
	cout<<"Enter the third number: ";
	cin>>*c;
	*d=*a+*b+*c;
	*e=*d/3;
	cout<<"The total is "<<*d<<"."<<endl;
	cout<<"The average is "<<*e<<"."<<endl;
}