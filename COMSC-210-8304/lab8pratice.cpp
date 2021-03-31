//Objective:  
//Name: Kunming Zhu
//Course: COMSC-

#include <iostream>
using namespace std;

#define LEFT_CHINL(x) (((x)*2)+1)
#define RIGHT_CHILD(X) (((x)*2)+2)
#define PARENT(x) (((x)-1)/2)

int main() 
{
	int *a;
	const NUM=5;
	a = new int[NUM];
	a[0]=12;
	a[1]=15;
	a[2]=88;
	a[3]=20;
	a[4]=28;
	
	for (int i = NUM-1; i>0; i--)
	{
		if (a[i]>a[PARENT(i)])
		{
			int j=i;
			while (a[j]>a[PARENT(j)] && i>0)
			{
				cout<<a[j]<<" is greater than "<<a[PARENT(j)]<<", swap"<<endl;
				swap(a[j],a[PARENT(j)]);
				
			}
		}
		else 
		{
			cout<<"Didn't have to swap"<<endl;
		}
	}
	delete a;
	a=nullptr;
}