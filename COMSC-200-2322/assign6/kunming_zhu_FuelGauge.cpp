#include "kunming_zhu_FuelGauge.h"
#include <string>
#include <iostream>
using namespace std;

FuelGauge::FuelGauge() : fuel(0){}

void FuelGauge::add()
{
	fuel++;
}

void FuelGauge::sub()
{
	if(fuel>=0)
		fuel--;
	else 
		fuel=0;
}

int FuelGauge::getfuel() const
{
	return fuel;
}

void FuelGauge::showfuel() const
{
	cout<<"Fuel level: "<<getfuel()<<" gallons."<<endl;
}