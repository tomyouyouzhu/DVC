// Specification file for the Coin class
#ifndef COIN_H
#define COIN_H
#include <string>
using namespace std;

class Coin
{
	private:
		string sideUp;
		void toss();
	public:
		Coin();
		string getSideUp() const;		
};


#endif
