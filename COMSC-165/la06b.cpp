//Objective:  la06b
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
using namespace std;

////double getArea (double, double=0);  for fun
double getArea (double);
double getArea (double, double);
int main() 
{
	int a=0;
	double l=0;
	double w=0;
	cout<<"1 - Find the Area of a Square."<<endl;
	cout<<"2 - Find the Area of a Rectangle."<<endl;
	while (a!=1 && a!=2)
	{
	    cout<<"Please choose which do you want: ";
	   	cin>>a;
	}
	switch (a)
	{
		case 1 : 
		while (l<=0)
		{
			cout<<"Please input the length of square's side: ";
			cin>>l;
		}
		cout<<"Thre area of this square is "<<getArea(l);
		break;
		case 2 : 
		while (l<=0 || w<=0)
		{
		    cout<<"Please input the length and width of rectangle: ";
		    cin>>l>>w;
		}
		cout<<"Thre area of this rectangle is "<<getArea(l,w);
	}
}

double getArea (double a)
{
	return a*a;
}
double getArea (double a, double b)
{
	return a*b;
}
/*
double getArea (double a, double b)
{
	if (b==0)
	    return a*a;
	else 
	    return a*b;
}
*/ ///for fun