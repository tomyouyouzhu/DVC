//Objective:  hw07
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int findLowest(vector<int> &a);
int findHighest(vector<int> &a);
double findAverage(vector<int> &a);
int findTotal(vector<int> &a);
void display(int a, int b, int c, double d);

int main() 
{
	vector<int> number;
	string name;
	int line;
	int high, low, total;
	double ave;
	cout<<"Please enter the file name: ";
	getline(cin,name);
	ifstream fin;
	fin.open(name.c_str());
	if (!fin)
	{
		cout<<"Failed to open source file."<<endl;
	}
	else 
	{
		while(fin.good())
		{
			fin>>line;
			number.push_back(line);
		}
		fin.close();
		high=findHighest(number);
		low=findLowest(number);
		total=findTotal(number);
		ave=findAverage(number);
		display(high, low, total, ave);	
	}
}

int findLowest(vector<int> &a)
{
	int low=a[0];
	for (int i=1; i<a.size(); i++)
	{
		if (a[i]<low)
		{
			low=a[i];
		}
	}
	return low;
}

int findHighest(vector<int> &a)
{
	int high=a[0];
	for (int i=1; i<a.size(); i++)
	{
		if (a[i]>high)
		{
			high=a[i];
		}
	}
	return high;
}

double findAverage(vector<int> &a)
{
	double ave;
	double sum=0;
	for (int i=0; i<a.size(); i++)
	{
		sum=sum+a[i];
	}
	ave=sum/a.size();
	return ave;
}

int findTotal(vector<int> &a)
{
	int sum=0;
	for (int i=0; i<a.size(); i++)
	{
		sum=sum+a[i];
	}
	return sum;
}

void display(int a, int b, int c, double d)
{
	cout<<setprecision(2)<<fixed;
	cout<<left<<setw(10)<<"High Value: ";
	cout<<right<<setw(13)<<a<<endl;
	cout<<left<<setw(10)<<"Low Value: ";
	cout<<right<<setw(14)<<b<<endl;
	cout<<left<<setw(10)<<"Total: ";
	cout<<right<<setw(15)<<c<<endl;
	cout<<left<<setw(10)<<"Average: ";
	cout<<right<<setw(15)<<d<<endl;	
}