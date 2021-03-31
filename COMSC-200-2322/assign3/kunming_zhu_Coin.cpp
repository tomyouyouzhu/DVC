// Implememtation file for the Coin class
#include <cstdlib>     // For rand and srand
#include <ctime>       // For the time function
#include "kunming_zhu_Coin.h"
using namespace std;

Coin::Coin()
{
	toss();
}

void Coin::toss ()
{
	int a= rand()%2;
	if (a==1)
		sideUp="Head";
	else 
		sideUp="Tail";
}

string Coin::getSideUp() const
{
	return sideUp;
}