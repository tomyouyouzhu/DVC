#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
class Account {
	friend std::ostream& operator<< (std::ostream & a, const Account & b);
	friend Account operator+(const double &a, const Account& b);
	private:
		double balance;
	public:
		Account(double);
		void credit(double);
		bool debit(double);
		double getBalance() const;
		Account operator+ (const double & a);
		Account operator- (const double & a);
		Account & operator+= (const double & a);
		Account & operator-= (const double & a);
		Account & operator= (const Account & a);
};

#endif