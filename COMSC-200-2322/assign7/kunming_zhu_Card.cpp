#include "kunming_zhu_Card.h"
#include <string>

//std::string Card::arrFace[13]={"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};

//std::string Card::arrSuit[4]={"Hearts","Diamonds","Clubs","Spades"};

Card::Card(int a, int b)
{
	face = a;
	suit = b;
}

std::string Card::toString()
{
	std::string s =arrFace[face]+" of "+arrSuit[suit];
	return s;
}
