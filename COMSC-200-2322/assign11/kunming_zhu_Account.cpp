#include "kunming_zhu_Account.h"
#include <iostream>

Account::Account(double a) {
	if (a >= 0)
		balance = a;
	else {
		balance = 0;
		std::cout<<"The balance cannot be negative!\n";
	}
}
void Account::credit(double a) {
	balance = balance + a;
}
bool Account::debit(double a) {
	if (balance > 0 && a > 0 && balance - a >= 0) {
		balance = balance - a;
		return true;
	}
	if (balance - a < 0) {
		std::cout<<"Debit amount exceeded account balance.\n";
		return false;
	}
	if (a == 0)
		std::cout<<"Nothing happended.\n";
		return false;
	}
double Account::getBalance() const {
	return balance;
}
Account Account::operator+ (const double & a) {
	Account m(this->getBalance() + a);
	return m;
}
Account Account::operator- (const double & a) {
	Account m(this->getBalance() - a);
	return m;
}
Account & Account::operator+= (const double & a) {
	this->credit(a);
	return *this;
}
Account & Account::operator-= (const double & a) {
	this->debit(a);
	return *this;
}
Account & Account::operator= (const Account & a) {
	this->debit(this->getBalance());
	this->credit(a.getBalance());
	return *this;
}
Account operator+(const double & a, const Account & b) {
	Account m(a + b.getBalance());
	return m;
}
std::ostream & operator<< (std::ostream & a, const Account & b) {
	a << "Balance: " << b.getBalance()<<std::endl;
	return a;
}