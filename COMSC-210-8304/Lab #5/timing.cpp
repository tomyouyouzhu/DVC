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

int main() {
    srand(time(0));
    rand(); // seed the RNG (we'll need it)

    // programmer customizations go here
    int n = 200000; // THE STARTING PROBLEM SIZE (MAX 250 MILLION)
    string bigOh = "O(n)"; // YOUR PREDICTION: O(n),
    // O(n log n), or O(n squared)

    cout.setf(ios::fixed);
    cout.precision(4);
    double elapsedSecondsNorm = 0;
    double expectedSeconds = 0;
    for (int cycle = 0; cycle < 4; cycle++, n*= 2) {
        ifstream fin;
        clock_t startTime = clock();
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
        // problem setup goes here -- create a data
        // structure of size n
        // assert that n is the size of the data
        // structure if applicable
        // assert(a.size( ) == n); // or something like that...

        // start the timer, do something, and stop the timer
                // do something where n is the "size" of the problem
        fin.close();
        clock_t endTime = clock();

        // validation block -- assure that process worked
        // if applicable

        // cleanup if applicable

        // compute timing results
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
