//Objective:  la07a
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
using namespace std;

int countDuplicates(int a[], int s, int n);

int main() 
{
	int number[5];
	int search;
	int dnumber;
	cout<<"Please input five numbers: ";
	for (int i=0; i<5; i++)
	    cin>>number[i];
	cout<<"Please enter a number to search for: ";
	cin>>search;
	dnumber=countDuplicates(number, 5, search);
	cout<<"The number "<<search<<" appeared "<<dnumber<<" times."<<endl;	
}

int countDuplicates(int a[], int s, int n)
{
	int count=0;
	for (int i=0; i<s; i++)
	{
		if (a[i]==n)
		    count++;
	}
	return count;
}