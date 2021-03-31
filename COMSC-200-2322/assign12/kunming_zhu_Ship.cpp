#include "kunming_zhu_Ship.h"
#include <string>
#include <iostream>

Ship::Ship() {}

Ship::Ship(std::string a, std::string b) {
	name = a;
	year = b;
}

std::string Ship::getName() const {
	return name;
}

std::string Ship::getYear() const {
	return year;
}

void Ship::setName(std::string a) {
	name = a;
}

void Ship::setYear(std::string a) {
	year = a;
}

void Ship::print() const {
	std::cout<<"Name: "<<name<<std::endl;
	std::cout<<"Year built: "<<year<<std::endl;
}