//Objective:  
//Name: Kunming Zhu
//Course: COMSC-

#include <iostream>
#include <string>
#include "kunming_zhu_DeckOfCards.h"
#include <time.h>
#include <iomanip>
#include <vector>
using namespace std;

int main() 
{
	srand(time(NULL));
	DeckOfCard king;
	for (int i = 0; i < 4; i++)
	{
		king.shuffle();
		int count = 0;
		cout<<"The "<<(i+1)<<" time: "<<endl;
		while (king.moreCards())
		{
			cout<<left<<setw(20);
			cout<<king.dealCard().toString();
			count++;
			if (count % 4 == 0)
				cout<<"\n";
		}
		cout<<"\n";
	}
}