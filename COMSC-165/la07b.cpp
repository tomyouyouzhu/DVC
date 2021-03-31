//Objective:  la07b
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <vector>
#include <iostream>
using namespace std;

int countDuplicates(vector<int> & a , int n);

int main() 
{
	vector<int> number;
	int search;
	int dnumber;
	cout<<"Please input five numbers: ";
	for (int i=0; i<5; i++)
	{
		int input;
	    cin>>input;
	    number.push_back(input);
	}
	cout<<"Please enter a number to search for: ";
	cin>>search;
	dnumber=countDuplicates(number, search);
	cout<<"The number "<<search<<" appeared "<<dnumber<<" times."<<endl;	
}

int countDuplicates(vector<int> & a, int n)
{
	int count=0;
	for (int i=0; i<a.size(); i++)
	{
		if (a[i]==n)
		    count++;
	}
	return count;
}