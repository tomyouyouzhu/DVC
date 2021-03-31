//Application Program
#include <iostream>
#include <iomanip>
#include "kunming_zhu_Coin.h"
using namespace std;

double playNickel();
double playDime();
double playQuarter();
int check(Coin);

int main()
{
	double sum1=0;
	double sum2=0;
	int round=1;
	srand(time(0));
	cout<<"Your starting balance: $"<<fixed << setprecision(2)<<sum1<<endl;
	cout<<"The computer`s starting balance: $"<<fixed << setprecision(2)<<sum2<<endl;
	cout<<endl;
	do 
	{
		sum1=sum1+playNickel()+playDime()+playQuarter();
		sum2=sum2+playNickel()+playDime()+playQuarter();
		cout<<"Your balance after round "<<round<<": $"<<fixed << setprecision(2)<<sum1<<endl;
		cout<<"The computer`s balance after round "<<round<<": $"<<fixed << setprecision(2)<<sum2<<endl;
		cout<<endl;
		round++;
	} while (sum1<1 && sum2<1 );
	if (sum1==sum2)
		cout<<"Tie! Nobody wins."<<endl;
	else if (sum2>sum1)
		cout<<"Sorry! The computer won."<<endl;
	else 
		cout<<"Congratulations! You won."<<endl;
}

double playNickel()
{
	double sum=0;
	Coin a;
	sum=sum+0.1*check(a);
	return sum;
}

double playDime()
{
	double sum=0;
	Coin a;
	sum=sum+0.05*check(a);
	return sum;
}

double playQuarter()
{
	double sum=0;
	Coin a;
	sum=sum+0.25*check(a);
	return sum;
}
//these threee functions can be writen in one in this case, but keeping three would be useful for further usage.
int check (Coin a)
{
	if (a.getSideUp()=="Head")
		return 1;
	else 
		return 0;
}