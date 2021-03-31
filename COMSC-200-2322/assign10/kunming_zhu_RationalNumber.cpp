#include "kunming_zhu_RationalNumber.h"
#include <iostream>

RationalNumber::RationalNumber() {
	
}
RationalNumber::RationalNumber(int a, int b) {
	for (int i = 2; i < 100; i++) {
		if (a % i == 0 && b % i == 0) {
			up = up / i;
			down = down / i;
		}
		else {
			up = a;
			down = b;
		}
	}
}

void RationalNumber::printRational() const {
	int a = up;
	int b = down;
	for (int i = 2; i < 100; i++) {
		if (a % i == 0 && b % i == 0) {
			a = a / i;
			b = b / i;
		}
	}
	if (up % down == 0)
		std::cout<<a / b;
	else if (down % up == 0)
		std::cout<<"1/"<<b/a;
	else 
		std::cout<<a<<"/"<<b;
}

int RationalNumber::getUp() const {
	return up;
}

int RationalNumber::getDown() const {
	return down;
}

void RationalNumber::setUp(int a) {
	up = a;
}

void RationalNumber::setDown(int a) {
	down = a;
}

RationalNumber RationalNumber::operator+ (const RationalNumber &a) const {
	RationalNumber c;
	c.setUp(this->up * a.getDown() + this->down * a.getUp());
	c.setDown(this->down * a.getDown());
	for (int i = 2; i < 100; i ++) {
		if (c.getUp() % i == 0 && c.getDown() % i ==0) {
			c.setUp(c.getUp() / i);
			c.setDown(c.getDown() / i);
		}
	}
	if (c.getUp() % c.getDown() == 0) {
		c.setUp(c.getUp() / c.getDown());
	}
	return c;
}
RationalNumber RationalNumber::operator- (const RationalNumber &a) const {
	RationalNumber c;
	c.setUp((this->up * a.getDown()) - (this->down * a.getUp()));
	c.setDown(this->down * a.getDown());
	for (int i = 2; i < 100; i ++) {
		if (c.getUp() % i == 0 && c.getDown() % i ==0) {
			c.setUp(c.getUp() / i);
			c.setDown(c.getDown() / i);
		}
	}
	if (c.getUp() % c.getDown() == 0) {
		c.setUp(c.getUp() / c.getDown());
		c.setDown(1);
	}
	return c;
}
RationalNumber RationalNumber::operator* (const RationalNumber &a) const {
	RationalNumber c;
	c.setUp(this->up * a.getUp());
	c.setDown(this->down * a.getDown());
	for (int i = 2; i < 100; i ++) {
		if (c.getUp() % i == 0 && c.getDown() % i ==0) {
			c.setUp(c.getUp() / i);
			c.setDown(c.getDown() / i);
		}
	}
	if (c.getUp() % c.getDown() == 0) {
		c.setUp(c.getUp() / c.getDown());
		c.setDown(1);
	}
	return c;
}
RationalNumber RationalNumber::operator/ (const RationalNumber &a) const {
	RationalNumber c;
	c.setUp(this->up * a.getDown());
	c.setDown(this->down * a.getUp());
	for (int i = 2; i < 100; i ++) {
		if (c.getUp() % i == 0 && c.getDown() % i ==0) {
			c.setUp(c.getUp() / i);
			c.setDown(c.getDown() / i);
		}
	}
	if (c.getUp() % c.getDown() == 0) {
		c.setUp(c.getUp() / c.getDown());
		c.setDown(1);
	}
	return c;
}
bool RationalNumber::operator> (const RationalNumber &a) const {
	RationalNumber c = *this - a;
	if (c.getUp() > 0)
		return true;
	return false;
}
bool RationalNumber::operator< (const RationalNumber &a) const {
	RationalNumber c = *this - a;
	if (c.getUp() < 0)
		return true;
	return false;
}
bool RationalNumber::operator>= (const RationalNumber &a) const {
	RationalNumber c = *this - a;
	if (c.getUp() >= 0)
		return true;
	return false;
}
bool RationalNumber::operator<= (const RationalNumber &a) const {
	RationalNumber c = *this - a;
	if (c.getUp() <= 0)
		return true;
	return false;
}
bool RationalNumber::operator== (const RationalNumber &a) const {
	RationalNumber c = *this - a;
	if (c.getUp() == 0)
		return true;
	return false;
}
bool RationalNumber::operator!= (const RationalNumber &a) const {
	RationalNumber c = *this - a;
	if (c.getUp() != 0)
		return true;
	return false;
}
