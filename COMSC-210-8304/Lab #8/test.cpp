//Objective:  
//Name: Kunming Zhu
//Course: COMSC-

#include <iostream>
#include "heap.h"
#include <time.h>
#include <cstdlib>
using namespace std;

int main() 
{
	srand(time(NULL));
	int size = 30; // the max number of elements in the default array is 100.
	int a[size];
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() % 100 + 1;
	}
	cout<<"Existing array test\n"
		<<"-------------------\n"
		<<"Random array:\n";
	for (int i = 0; i < size; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	Heap t(a, size);
	cout<<"Number of nodes:";
	if (t.isEmpty())
	{
		cout<<"(isEmpty() is TRUE):\n"; 
	}
	else 
		cout<<"(isEmpty() is FALSE):\n";
	cout<<t.getNumberOfNodes()<<endl;
	cout<<size<<" removes:\n";
	for (int i = 0; i < size; i++)
	{
		cout<<t.peekTop()<<" ";
		t.remove();
	}
	cout<<"\n\n";
	cout<<"Existing with empty array test\n"
		<<"------------------------------\n"
		<<"Random array:\n";
	int b[size];
	for (int i = 0; i < size; i++)
	{
		b[i] = rand() % 100 + 1;
		cout<<b[i]<<" ";
	}
	cout<<"\n";
	Heap s;
	cout<<"Number of nodes: ";
	if (s.isEmpty())
	{
		cout<<"(isEmpty() is TRUE):\n"; 
	}
	else 
		cout<<"(isEmpty() is FALSE):\n";
	cout<<s.getNumberOfNodes()<<endl;
	for (int i = 0; i < size; i++)
	{
		s.add(b[i]);
	}
	cout<<size<<" removes:\n";
	for (int i = 0; i < size; i++)
	{
		cout<<s.peekTop()<<" ";
		s.remove();
	}
}