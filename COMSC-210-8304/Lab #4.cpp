//Objective:  Lab#4
//Name: Kunming Zhu
//Course: COMSC- 210

#include <iostream>
#include <queue>
#include <cstdlib>
#include <iomanip>
using namespace std;

class Customer
{
	private:
		int ctime;
		int stime;
	public:
		void setCtime(int);
		int getCtime() const;
		void setStime(int);
		int getStime() const;
};

bool randomChance(double);
int randomInt(int, int);
void run(int, int, int, int, double);

int main() 
{
	int totalNumber,maxNumber,minNumber,lineSize;
	double rate;
	cout<<setw(35)<<left;
	cout<<"Overall simulation time: ";
	cin>>totalNumber;
	cout<<setw(35)<<left;
	cout<<"Arrival rate: ";
	cin>>rate;
	cout<<setw(35)<<left;
	cout<<"Minimum service time: ";
	cin>>minNumber;
	cout<<setw(35)<<left;
	cout<<"Maximum service time: ";
	cin>>maxNumber;
	cout<<setw(35)<<left;
	cout<<"Maximum line size: ";
	cin>>lineSize;
	srand(time(0));
	run(totalNumber,maxNumber,minNumber,lineSize,rate);
}

void Customer::setCtime(int a)
{
	ctime=a;
}
int Customer::getCtime() const
{
	return ctime;
}
void Customer::setStime(int a)
{
	stime=a;
}
int Customer::getStime() const
{
	return stime;
}
bool randomChance(double prob) { 
	double rv = rand() / (double(RAND_MAX) + 1); 
	return (rv < prob); 
} 
int randomInt(int min, int max) { 
	return (rand() % (max - min) + min); 
}
void run(int a, int b, int c, int d, double e)
{
	int i=0;
	int numberInLine=0;
	int los=0,customerNumber=0,wtime=0,numberInline=0,servise=0;
	queue<Customer> line;
	for (int i=1; i<=a; i++)
	{
		servise--;
		numberInline=numberInline+line.size();
		if (servise<0)
		{
			servise=0;
		}
		if (servise<=0 && line.size()>0)
		{
			servise=line.front().getStime();
			wtime=wtime+i-line.front().getCtime();
			line.pop();
		}
		if (randomChance(e))
		{
			customerNumber++;
			Customer x;
			x.setCtime(i);
			x.setStime(randomInt(c,b));
			if (line.size()<d)
			{
				line.push(x);
			}
			else 
			{
				los++;
			}
		}
	}
	cout<<endl;
	cout<<setw(35)<<left;
	cout<<"Customers serviced: "<<customerNumber-los<<endl;
	cout<<setw(35)<<left;
	cout<<"Customers leaving: "<<los<<endl;
	cout<<setw(35)<<left;
	cout<<"Average time spent in line: "<<setprecision(3)<<(double)wtime/(customerNumber-los)<<endl;
	cout<<setw(35)<<left;
	cout<<"Average line length: "<<setprecision(3)<<(double)numberInline/a<<endl;
}