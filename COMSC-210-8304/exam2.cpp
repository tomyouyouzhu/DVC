//Objective:  
//Name: Kunming Zhu
//Course: COMSC-

#include <iostream>

using namespace std;

int c(int arr[], int n)
{
	if (n<=0)
		return 0;
	return arr[n-1]+c(arr,n-1);
}
int main() 
{
	int arr[]={0,1,2,3,4};
	int n=5;
	cout<< c(arr, n);
}