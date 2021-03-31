//Objective:  la09b
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
using namespace std;

void enter(int *a);
void print(int *a);

int main() 
{
	int *b=new int[5];
	enter(b);
	print(b);
	delete [] b;
}

void enter(int *b)
{
	for (int i=0; i<5; i++)
	{
	cout<<"Enter an integer: ";
	cin>>b[i];
	}	
}
void print(int *b)
{
	cout<<"You entered: ";
	for (int i=0; i<5; i++)
	{
		cout<<*(b+i)<<" ";
	}
}