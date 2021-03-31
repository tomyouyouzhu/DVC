// main.cpp - Testing the LongestIncreasingSequence subroutine.
#include <iostream>
#include "longest.h"
using namespace std;

/*
extern long LongestIncreasingSequence(long arr[], long b) {
	long max = 0;
	long count = 1;
	for (int i = 0; i < b; i++) {
		if (arr[i+1] <= arr[i]) {
			count = 1; 
		}
		if (arr[i+1] > arr[i]) {
			count++;
			if (count > max) {
				max = count;
			}
		}
	}
	return max;
}
*/
int main()
{

	const unsigned ARRAY_SIZE = 18;
	long array[] = { 1, 2, 3, 4, 5, 6, 9, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4 };
	long num = LongestIncreasingSequence(array, ARRAY_SIZE);

	cout<<"The longest increasing sequence is "<<num;
	//system("PAUSE");
	return 0;
}