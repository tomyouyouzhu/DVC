//Objective:  hw11
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct playerdata
{
	string name;
	int number;
	int point;
};

void enter(playerdata *a, int );
void calculatescore(playerdata *a, int);
void topscore(playerdata *a, int);
void print(playerdata *a, int );

int main() 
{
	playerdata team[5];
	enter(team,5);
	print(team,5);
	calculatescore(team,5);
	topscore(team,5);
}

void enter(playerdata *a, int s)
{
	for (int i=0; i<s; i++)
	{
		cout<<"Enter player's name: ";
		if(i>0)
		{
			cin.ignore();
		}
		getline(cin, a[i].name);
		cout<<"Enter player's number: ";
		cin>>a[i].number;
		cout<<"Enter player's number: ";
		cin>>a[i].point;
		cout<<endl;
	}
}

void calculatescore(playerdata *a,int s)
{
	int sum=0;
	for(int i=0; i<s; i++)
	{
		sum=sum+a[i].point;
	}
	cout<<"Total Points: "<<sum<<endl;
	cout<<endl;
}
void topscore(playerdata *a, int s)
{
	int t;
	for (int i=1; i<s; i++)
	{
		int max=0;
		if (a[i].point>max)
		{
			int max=a[i].point;
			t=i;
		}
	}
	cout<<"The top scorer is: "<<a[t].name<<endl;
	cout<<"Their number is: "<<a[t].number<<endl;
	cout<<"Their points: "<<a[t].point<<endl;
	cout<<endl;
}
void print(playerdata *a, int s)
{
	cout<<left<<setw(10)<<"Player";
	cout<<left<<setw(10)<<"Number";
	cout<<left<<setw(10)<<"Points"<<endl;
	cout<<left<<setw(10)<<"------";
	cout<<left<<setw(10)<<"------";
	cout<<left<<setw(10)<<"------"<<endl;
	for (int i=0; i<s;i++)
	{
		cout<<left<<setw(10)<<a[i].name;
		cout<<left<<setw(10)<<a[i].number;
		cout<<left<<setw(101)<<a[i].point<<endl;
	}
	cout<<endl;
}