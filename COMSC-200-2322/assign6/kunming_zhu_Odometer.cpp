#include "kunming_zhu_Odometer.h"
#include <string>
#include <iostream>
using namespace std;

Odometer::Odometer():mileage(0){}

void Odometer::add()
{
	mileage++;
}

int Odometer::getmile() const
{
	return mileage;
}

void Odometer::showmile() const
{
	cout<<"Mileage: "<<getmile()<<endl;
}

FuelGauge* Odometer::getfuel()
{
	return fuelptr;
}