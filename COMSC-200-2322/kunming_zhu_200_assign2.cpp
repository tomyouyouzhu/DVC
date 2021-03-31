//Objective:  assign2
//Name: Kunming Zhu
//Course: COMSC-

#include <iostream>
#include <string>
#include <cstdlib>     
#include <ctime>
using namespace std;

int play(int, int);
void judge(int);

class Die
{
	private:
	int sides;
	int value;
	public:
	Die(int x, int y) : sides{x}, value{y}{}
	void setSides(int a)
	{
		if (a > 0)
			sides=a;
	}
	void roll(int sides)
	{
		value = rand() % sides + 1;
	}
	int getSides() const
	{
		return sides;
	}
	int getValue() const
	{
		return value;
	}
};

int main() 
{
	const int NUMOFDIE = 2;
	const int NUMOFSIDE = 6;
	int result;
	cout<<"Let`s play a game of 21! "<<endl;
	cout<<endl;
	result = play(NUMOFDIE,NUMOFSIDE);
	judge(result);
	cout<<"Game over"<<endl;
}

int play(int a, int b)
{
	Die dice{a , b};
	int result=3;
	char choice='Y';
	int sum1=0;
	int sum2=0;
	while (choice == 'Y' || choice =='y')
	{
		cout<<"Would you like to roll the dice?"<<endl;
		cout<<"Enter Y for yes or N for no : ";
		cin>>choice;
		cout<<endl;
		while (choice!='Y' && choice!='y' && choice!='N' && choice!='n')
		{
			cout<<"Would you like to roll the dice?"<<endl;
			cout<<"Enter Y for yes or N for no : ";
			cin>>choice;
			cout<<endl;
		}
		if (choice == 'N' || choice =='n')
		{
			break;
		}
		for (int i=0; i<a; i++)
		{
			srand (time(NULL));
			dice.roll(b);
			sum1=sum1+dice.getValue();
		}
		cout<<"You have "<<sum1<<" points."<<endl;
		cout<<endl;
		for (int j=0; j<a; j++)
		{
			dice.roll(b);
			sum2=sum2+dice.getValue();
		}
	}
	if (sum1!=0)
	{
		cout<<"The computer had "<<sum2<<" points."<<endl;
		cout<<"You had "<<sum1<<" points."<<endl;
		cout<<endl;
	}
	if ((sum1!=0 && sum1<=21 && sum1>sum2 && sum2<21) || (sum1<=21 && sum2>21))
		result=1;
	if ((sum1!=0 && sum1<=21 && sum1==sum2) || (sum1>21 && sum2>21))
		result=0;
	if ((sum1!=0 && sum1<=21 && sum2<21 && sum1<sum2) || (sum1>21 && sum2<=21))
		result=2;
	return result;
}

void judge(int a)
{
	if (a==1)
		cout<<"Congratualtions! You won! "<<endl;
	if (a==0 || a==2)
		cout<<"Better luck next time."<<endl;
	cout<<endl;
}