//Objective:  la05a
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>

using namespace std;
int main() 
{
	int number;
	int sum=0;
	int begin=1;
	cout<<"Please input a positive integer number: ";
	cin>>number;
	while (number<=0)
	{
	  cout<<"Invild number!"<<endl;
	  cout<<"Please input a positive integer number: ";
	  cin>>number;
	} 
	while (begin<=number)
	{
		sum=begin+sum;
		begin++;
	}
	cout<<"The sum from 1 to "<<number<<" is "<<sum;
}