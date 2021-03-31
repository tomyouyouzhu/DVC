#include "kunming_zhu_Ship.h"
#include <string>

class CruiseShip: public Ship {
	private: 
		int max;
	public:
		CruiseShip(std::string a, std::string b, int c);
		virtual void print() const override; 
		void setMax(int a);
		int getMax() const;
};