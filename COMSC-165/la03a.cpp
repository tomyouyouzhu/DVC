//Objective:  la03a
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
	const double PI=3.14159;
	double radius;
	double area;
	double diameter;
	double circumference;
	cout<<"Enter the radius of a circle : ";
	cin>>radius;
	diameter=2*radius;
	circumference=2*PI*radius;
	area=radius*radius*PI;
	cout<<setprecision(3)<<fixed;
	cout<<left<<setw(15)<<"Radius:";
	cout<<right<<setw(12)<<radius<<endl;
	cout<<left<<setw(15)<<"Area:";
	cout<<right<<setw(12)<<area<<endl;
	cout<<left<<setw(15)<<"Diameter:";
	cout<<right<<setw(12)<<diameter<<endl;
	cout<<left<<setw(15)<<"Circumference:";
	cout<<right<<setw(12)<<circumference<<endl;
}