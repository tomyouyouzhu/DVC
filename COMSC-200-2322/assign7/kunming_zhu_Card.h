#include <string>
class Card
{
	private:
		int face;
		int suit;
		//static std::string arrFace[13];
		//static std::string arrSuit[4];
	public: 
		Card(int, int);
		std::string arrFace[13]={"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
		std::string arrSuit[4]={"Hearts","Diamonds","Clubs","Spades"};
		std::string toString();
};