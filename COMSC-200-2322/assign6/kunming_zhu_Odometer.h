#include "kunming_zhu_FuelGauge.h"

class Odometer
{
	private:
		int mileage;
		FuelGauge fuel;
		FuelGauge* fuelptr=&fuel;
	public:
		Odometer();
		void showmile() const;
		void add();
		FuelGauge* getfuel();
		int getmile() const;
};