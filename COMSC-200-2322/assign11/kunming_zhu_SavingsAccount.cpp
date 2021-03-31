#include "kunming_zhu_SavingsAccount.h"

SavingsAccount::SavingsAccount(double a, double b) : Account(a){
	rate = b;
}
double SavingsAccount::calculateInterest() {
	double num = Account::getBalance();
	return num*rate;
}
double SavingsAccount::getRate() const {
	return rate;
}
SavingsAccount SavingsAccount::operator+ (const double & a) {
	SavingsAccount m(Account::getBalance() + a, rate);
	return m;
}
SavingsAccount SavingsAccount::operator- (const double & a) {
	SavingsAccount m(Account::getBalance() - a, rate);
	return m;
}
SavingsAccount & SavingsAccount::operator+= (const double & a) {
	this->Account::credit(a);
	return *this;
}
SavingsAccount & SavingsAccount::operator-= (const double & a) {
	Account::debit(a);
	return *this;
}
SavingsAccount & SavingsAccount::operator= (const SavingsAccount & a) {
	Account::debit(Account::getBalance());
	Account::credit(a.getBalance());
	return *this;
}
SavingsAccount operator+(const double & a, const SavingsAccount & b) {
	SavingsAccount m(a + b.getBalance(), b.getRate());
	return m;
}
std::ostream & operator<< (std::ostream & a, const SavingsAccount & b) {
	a << "Balance: $" << b.Account::getBalance() << " Rate: "<<b.getRate();
	return a;
}