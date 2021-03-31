#include "kunming_zhu_Account.h"

class SavingsAccount : public Account {
	friend std::ostream& operator<< (std::ostream & a, const SavingsAccount & b);
	friend SavingsAccount operator+(const double &a, const SavingsAccount& b);
	private:
		double rate;
	public:
		SavingsAccount(double, double);
		double calculateInterest();
		double getRate() const;
		SavingsAccount operator+ (const double & a);
		SavingsAccount operator- (const double & a);
		SavingsAccount & operator+= (const double & a);
		SavingsAccount & operator-= (const double & a);
		SavingsAccount & operator= (const SavingsAccount & a);
};