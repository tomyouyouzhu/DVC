//Objective:  hw09
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
using namespace std;

int *doub (int *a, int b);

int main() 
{
	int n[5]={9,8,7,6,5};
	int *print=doub(n,5);
	for(int i=0; i<(5*2);i++)
	{
		cout<<print[i]<<" ";
	}
	delete [] print;
}

int *doub(int *a, int b)
{
	int * c;
	c=new int [2*b];
	for (int i=0; i<b; i++)
	{
		*(c+i)=*(a+i);
		*(c+b+i)=0;
	}
	return c;
}