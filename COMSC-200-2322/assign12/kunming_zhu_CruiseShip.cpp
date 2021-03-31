#include "kunming_zhu_CruiseShip.h"
#include <string>
#include <iostream>

CruiseShip::CruiseShip(std::string a, std::string b, int c):Ship(a, b) {
	max = c;
}

void CruiseShip::print() const {
	std::cout<<"Name: "<<Ship::getName()<<std::endl;
	std::cout<<"Maxumum passengers: "<<max<<std::endl;
}

void CruiseShip::setMax(int a) {
	max = a;
}

int CruiseShip::getMax() const {
	return max;
}