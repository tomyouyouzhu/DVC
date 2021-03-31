#include <string>
#include <vector>
#include "kunming_zhu_Card.h"

class DeckOfCard
{
	private:
		std::vector <Card> deck;
		int currentCard;
	public:
		DeckOfCard();
		void shuffle();
		class Card dealCard();
		bool moreCards() const;
};