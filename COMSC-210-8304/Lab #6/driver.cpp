//Objective:  
//Name: Kunming Zhu
//Course: COMSC-

#include <iostream>
#include "SortableBag.h"
#include <cstdlib>
using namespace std;

int main() 
{
	srand(time(0));
	int size=1000;
	SortableBag<int> z;
	for (int i=0; i<size; i++)
	{
		int x=rand()%1000;
		z.add(x);
	}
	vector<int> a=z.toVector();
	for (int i=0; i<a.size(); i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
	cout<<"Sorting"<<endl;
	cout<<endl;
	z.sort();
	vector<int> m=z.toVector();
	bool done=true;
	for (int i=0; i<m.size()-1; i++)
	{
		if (m[i]>m[i+1])
			done=false;
	}
	string re= done==true ? "PASS" : "FAIL";
	cout<<re<<endl;
	cout<<endl;
	for (int i=0; i<m.size(); i++)
	{
		cout<<m[i]<<" ";
	}	
}