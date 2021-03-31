#include <vector>
#include "kunming_zhu_DeckOfCards.h"
#include <cstdlib>
#include <string>
using namespace std;

DeckOfCard::DeckOfCard()
{
	for (int i = 0; i < 52; i++)
	{
		int a = rand()%13;
		int b = rand()%4;
		Card c(a, b);
		for (int j = 0; j < i; j++)
		{
			while (c.toString() == deck[j].toString())
			{
				int a = rand()%13;
				int b = rand()%4;
				Card temp(a, b);
				c = temp;
			}
		}
		deck.push_back(c);
	}
	currentCard = deck.size()-1;
}
void DeckOfCard::shuffle()
{
	currentCard = deck.size()-1;
	for (int i = 0; i < 52; i++)
	{
		int a = rand()%52;
		Card temp = deck[i];
		deck[i] = deck[a];
		deck[a] = temp;
	}
}
Card DeckOfCard::dealCard()
{
	Card a = deck[currentCard];
	currentCard--;
	return a;
}
bool DeckOfCard::moreCards() const
{
	if (currentCard < 0)
		return false;
	else 
		return true;
}