#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <fstream>
#include <cassert> // for assert
#include <cmath>   // for log and pow
#include <cstdlib> // for srand and rand
#include <ctime>   // for clock( ), clock_t,
// time, and CLOCKS_PER_SEC

#define INFILE "names.txt"

int main() 
{
	srand(time(0));
	rand(); // seed the RNG (we'll need it)

		// programmer customizations go here
	int n = 2000; // THE STARTING PROBLEM SIZE (MAX 250 MILLION)
	string bigOh = "O(n squared)"; // YOUR PREDICTION: O(n),
		// O(n log n), or O(n squared)

	cout.setf(ios::fixed);
	cout.precision(4);
	double elapsedSecondsNorm = 0;
	double expectedSeconds = 0;
	for (int cycle = 0; cycle < 4; cycle++, n*= 2) 
	{
		ifstream fin;
		fin.open(INFILE);
		if (!fin.good()) throw "I/O error";	
		vector<string> a;
		int count=0;
		while (fin.good() && count<n)
		{
			count++;
			string b;
			getline(fin,b);
			a.push_back(b);
		}
		fin.close();
		clock_t startTime = clock();
		for (int i = 0; i < n; i++)
				for (int j = i + 1; j < n; j++)
					if (a[j] < a[i])
						swap(a[i], a[j]);
		for (int i = 1; i < n; i++) assert (a[i - 1] <= a[i]); 
		clock_t endTime = clock();
		double elapsedSeconds = (double)
								(endTime - startTime) / CLOCKS_PER_SEC;
		double factor = pow(2.0, double(cycle));
		if (cycle == 0)
			elapsedSecondsNorm = elapsedSeconds;
		else if (bigOh == "O(n)")
			expectedSeconds = factor * elapsedSecondsNorm;
		else if (bigOh == "O(n log n)")
			expectedSeconds = factor *
								log(double(n)) / log(n / factor) *
								elapsedSecondsNorm;
		else if (bigOh == "O(n squared)")
			expectedSeconds = factor * factor * elapsedSecondsNorm;

				// reporting block
		cout << elapsedSeconds;
		if (cycle == 0) cout << " (expected " << bigOh << ')';
		else cout << " (expected " << expectedSeconds << ')';
		cout << " for n=" << n << endl;
		}
}
