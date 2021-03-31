//Objective:  hw06
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
#include <iomanip>
using namespace std;

void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main() 
{
	int s1,s2,s3,s4,s5;
	s1=s2=s3=s4=s5=-1;
    getScore(s1);
    getScore(s2);
    getScore(s3);
    getScore(s4);
    getScore(s5);
    calcAverage(s1, s2, s3, s4, s5);
}

void getScore(int & a)
{
	while (a<0 || a>100)
	{
        cout<<"Enter the test score :";
	    cin>>a;
	    if (a<0 || a>100)
	    {
		    cout<<"Error: invalid test score."<<endl;
		    cout<<"Score must be from 1 through 100."<<endl;
	    }
	}
}

void calcAverage(int a, int b, int c, int d, int e)
{
	cout<<setprecision(1)<<fixed;
	double lowest=findLowest(a,b,c,d,e);
	double average=((a+b+c+d+e)-lowest)/4;
	cout<<"The average is "<<average<<"."<<endl;
}

int findLowest(int a, int b, int c, int d, int e)
{
	int lowest=a;
	if (b<lowest)
	    lowest=b;
	if (c<lowest)
	    lowest=c;
	if (d<lowest)
	    lowest=d;
	if (e<lowest) 
		lowest=e;
	return lowest;
}