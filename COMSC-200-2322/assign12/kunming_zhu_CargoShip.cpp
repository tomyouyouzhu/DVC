#include "kunming_zhu_CargoShip.h"
#include <string>
#include <iostream>

CargoShip::CargoShip(std::string a, std::string b, int c): Ship(a, b) {
	ton = c;
}

void CargoShip::print() const {
	std::cout<<"Name: "<<Ship::getName()<<std::endl;
	std::cout<<"Cargo capacity: "<<ton<<" tons"<<std::endl;
}

void CargoShip::setTon(int a) {
	ton = a;
}

int CargoShip::getTon() const {
	return ton;
}