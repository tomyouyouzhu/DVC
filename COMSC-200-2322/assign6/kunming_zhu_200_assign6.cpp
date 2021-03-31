//Objective:  
//Name: Kunming Zhu
//Course: COMSC-

#include <iostream>
#include <string>
#include "kunming_zhu_Odometer.h"

using namespace std;

int main() 
{
	int tank,cost;
	cout<<"Enter how many gallons do you want to fill: ";
	cin>>tank;
	cout<<"Enter one gallon can run how many miles: ";
	cin>>cost;
	Odometer mycar;
	for (int i=0; i<tank; i++)
	{
		mycar.getfuel()->add();
	}
	while (mycar.getfuel()->getfuel()>0)
	{
		mycar.add();
		mycar.showmile();
		mycar.getfuel()->showfuel();
		if (mycar.getmile()%cost==0)
			mycar.getfuel()->sub();
		if (mycar.getfuel()->getfuel()==1)
			if (mycar.getmile()%cost==cost-1)
				mycar.getfuel()->sub();
		cout<<endl;
	}
	mycar.add();
	mycar.showmile();
	mycar.getfuel()->showfuel();
}