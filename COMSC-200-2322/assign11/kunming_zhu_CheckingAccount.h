#include "kunming_zhu_Account.h"
#include <iostream>
class CheckingAccount : public Account {
	friend std::ostream& operator<< (std::ostream & a, const CheckingAccount & b);
	friend CheckingAccount operator+(const double &a, const CheckingAccount& b);
	private:
		double fee;
	public:
		CheckingAccount(double, double);
		void credit(double);
		void debit(double);
		double getFee() const;
		CheckingAccount operator+ (const double & a);
		CheckingAccount operator- (const double & a);
		CheckingAccount & operator+= (const double & a);
		CheckingAccount & operator-= (const double & a);
		CheckingAccount & operator= (const CheckingAccount & a);
};