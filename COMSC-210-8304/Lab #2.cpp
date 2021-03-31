//Objective:  Lab#2
//Name: Kunming Zhu
//Course: COMSC-210

#include <iostream>
using namespace std;

int g(int);

int main() 
{
	int n;
	cout<<"Enter a number for a golomb`s sequence: ";
	cin>>n;
	for (int i=1; i<=n; i++)
	{
		cout<<i<<": "<<g(i)<<endl;
	}
}

int g(int n)
{
	int a;
	if (n==1)
		a=1;
	if (n>1)
	{
		a=1+g(n-g(g(n-1)));
	}
	return a;
}