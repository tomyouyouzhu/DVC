//Objective:  la06a
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
using namespace std;

void getRadius(double &);
void showArea(double);
int main() 
{
	double a;
	getRadius(a);
	showArea(a);
}

void getRadius(double & a)
{
	cout<<"Please input the diameter of a circle: ";
	cin>>a;
}

void showArea(double a)
{
	cout<<"The area of the circle is "<<3.14159*a*a;
}