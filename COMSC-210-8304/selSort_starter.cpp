#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX    20
#define RMAX   100

void selectionSort(int[], int);

int main() {
	int arr[MAX];
	int i = 0;

	// initialize the rand. number generator
	unsigned int seed = time(0);
	srand(seed);

	// fill the array with arandom numbers
	for (int i = 0; i < MAX; i++) {
		arr[i] = rand() % RMAX;
	}

	cout << "Unsorted Array:" << endl;
	for(int i = 0; i < MAX; i++) {
		cout << "arr[" << i << "] " << arr[i] << endl;
	}
	cout << endl;

	selectionSort(arr, MAX);

	cout << "Sorted Array:" << endl;
	for (int i = 0; i < MAX; i++) {
		cout << "arr[" << i << "] " << arr[i] << endl;
	}

	return 0;
}

void selectionSort(int arr[], int n) {
	int lrg = 0;
	int lrgi = 0;
	int temp = 0;

	// if the array is fully sorted, return
	if (n <= 1) {
		return;
	}
	for (int i=n; i>=0; i--)
	{
		if (arr[i]>lrg)
		{
			lrg=arr[i];
			lrgi=i;
			temp=arr[n];
			arr[n]=lrg;
			arr[i]=temp;
			selectionSort(arr,n-1);
		}
	}

    // implement the function here

    // should have a recursive call
}
