#include <string>

class FuelGauge
{
	private:
		int fuel;
	public:
		FuelGauge();
		void showfuel() const;
		void add();
		void sub();
		int getfuel() const;
};