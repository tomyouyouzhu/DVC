//Objective:  
//Name: Kunming Zhu
//Course: COMSC-

#include <iostream>

using namespace std;


bool isElementOf(int arr[], int n, int t)
{
	for (int i=0; i <n ; i++)
	{
		if (arr[i]==t)
			return true;
	}
	return false;
}
int main() 
{
	int arr[]={0,1,2,3,4};
	int n= 5;
	cout<<isElementOf(arr, n, 1);
}