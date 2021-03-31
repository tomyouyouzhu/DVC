//Objective:  la19
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
using namespace std;

int addition(int,int);

int main() 
{
	int x,y;
	cout<<"Enter the first number: ";
	cin>>x;
	cout<<"Enter the second number: ";
	cin>>y;
	cout<<"Your answer is "<<addition(x,y);
}

int addition(int a, int b)
{
	if (b==0)
	{
		return 0;
	}
	else 
	{
		b--;
		return a+addition(a,b);
	}
}