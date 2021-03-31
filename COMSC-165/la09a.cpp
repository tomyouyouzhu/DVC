//Objective:  la09a
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
using namespace std;

int main() 
{
	int a;
	int *b;
	cout<<"Please enter an integer: ";
	cin>>a;
	b=&a;
	cout<<"You entered: "<<*b;	
}