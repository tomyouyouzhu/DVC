#include "kunming_zhu_CheckingAccount.h"
#include <iostream>
CheckingAccount::CheckingAccount(double a, double b) : Account(a) {
	fee = b;
}
void CheckingAccount::credit(double a) {
	if (a > 0)
		Account::credit(a - fee);
	if (a < 0)
		std::cout<<"Cannot do negative crediting.\n";
}
void CheckingAccount::debit(double a) {
	Account::debit(a + fee);	
}
double CheckingAccount::getFee() const {
	return fee;
}
CheckingAccount CheckingAccount::operator+ (const double & a) {
	CheckingAccount m(Account::getBalance() + a, fee);
	return m;
}
CheckingAccount CheckingAccount::operator- (const double & a) {
	CheckingAccount m(Account::getBalance() - a, fee);
	return m;
}
CheckingAccount & CheckingAccount::operator+= (const double & a) {
	this->Account::credit(a);
	return *this;
}
CheckingAccount & CheckingAccount::operator-= (const double & a) {
	Account::debit(a);
	return *this;
}
CheckingAccount & CheckingAccount::operator= (const CheckingAccount & a) {
	Account::debit(Account::getBalance());
	Account::credit(a.getBalance());
	return *this;
}
CheckingAccount operator+(const double & a, const CheckingAccount & b) {
	CheckingAccount m(a + b.getBalance(), b.getFee());
	return m;
}
std::ostream & operator<< (std::ostream & a, const CheckingAccount & b) {
	a << "Balance: $" << b.Account::getBalance() << " Fee: "<<b.getFee();
	return a;
}