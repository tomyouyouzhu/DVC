//Objective:  
//Name: Kunming Zhu
//Course: COMSC-

#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;

const char *cities[]={"a","b","c","d","e","f","g"};
int fact(int n)
{
	if (n==0)
		return 1;
	else 
		return n * fact(n-1);
}

int getnumberofgroups(int n, int k)
{
	if (k==0|| k==n)
		return 1;
	else if (k>n)
		return 0;
	else 
		return getnumberofgroups(n-1,k-1)+getnumberofgroups(n-1,k);
}

int gercombinations(int n, int k)
{
	int num=fact(n);
	int denom=fact(k) * fact(n-k);
	return (num/denom);
}

int pritnpermutations(int n)
{
	int count=0;
	do 
	{
		count++;
		cout<<endl;
		for(int i=0; i<n; i++)
			cout<<cities[i]<<endl;
	} while (next_permutation(cities,cities+n));
	return (count);
}

int main() 
{
	cout<<"getnumberofgroups(4,2) = "
		<<getnumberofgroups(4,2)<<" should be "
		<<gercombinations(4,2)<<"."<<endl;
	cout<<pritnpermutations(5)<<endl;
}