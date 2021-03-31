#include "kunming_zhu_Ship.h"
#include <string>

class CargoShip: public Ship {
	private:
		int ton;
	public:
		CargoShip(std::string a, std::string b, int c);
		virtual void print() const override;
		void setTon(int a);
		int getTon() const;
};