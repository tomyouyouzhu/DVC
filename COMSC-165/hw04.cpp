//Objective:  hw04
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() 
{
	double height;
	double weight;
	double bmi;
	cout<<"Enter your height: ";
	cin>>height;
	cout<<"Enter your weight: ";
	cin>>weight;
	bmi=(weight*703)/(height*height);
	cout<<"Your bmi is "<<bmi<<"."<<endl;
	if (bmi>25)
	{
		cout<<"You are overweight. ";
	}
	if (bmi<18.5)
	{
		cout<<"You are underweight. ";
	}
	if (18.5<=bmi && bmi<=25) 
	{
		cout<<"Your weight is optimal.";
		if (bmi==18.5)
		{
			cout<<"But you are at the edge of underweight.";
		}
		if (bmi==25)
		{
			cout<<"But you are at the edge of overweight.";
		}
	}
	

}