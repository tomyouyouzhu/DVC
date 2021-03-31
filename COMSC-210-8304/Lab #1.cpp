//Objective:  
//Name: Kunming Zhu
//Course: COMSC-

#include <iostream>
#include <cstring>
using namespace std;

// print an array backwards, where 'first' is the first index
// of the array, and 'last' is the last index 
void writeArrayBackward(const char anArray[], int first, int last, int n) 
{
	if (last+1 >= n)
		cout << anArray[last+1-n];
	if (last+1-n >= n)
	{
		char h[last-n];
		for (int i = 0; i <= (last-n);i++)
		{
			h[i] = anArray[i];
		}
		writeArrayBackward(h, first, last-n, n);
	}
}

// test driver
int main() 
{
	const char *s = "abc123";
	writeArrayBackward(s, 0, strlen(s) - 1, 2);
	cout<<endl;
	const char *d = "hello";
	writeArrayBackward(d, 0, strlen(d) - 1, 1);
	cout<<endl;
	const char *f = "hello";
	writeArrayBackward(f, 0, strlen(f) - 1, 3);
	cout<<endl;
	const char *g = "c1c1c1";
	writeArrayBackward(g, 0, strlen(g) - 1, 2);	
	cout<<endl;
}
