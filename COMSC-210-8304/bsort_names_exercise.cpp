#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

/* #define DEBUGGING 1 */

#define INPUT "names2.txt"

#ifdef DEBUGGING
#define DPRINTF(f_, ...) fprintf(stderr, (f_), __VA_ARGS__)
#else
#define DPRINTF(f_, ...) if (1) {  }
#endif

#define LAST_NAME(v) (v[1])
#define FIRST_NAME(v) (v[0])

void bsort(vector <string> &fn, vector <string> &ln) {
	// Implement this function and output comparisons + swaps
	int comps=0, swaps=0, pass=1;
	bool sorted =false;
	while (!sorted && (pass<fn.size()-pass))
	{
		sorted =true;
		for (int index=0; index<fn.size()-pass; index++)
		{
			int nextIndex=index+1;
			comps++;
			if (ln[index]>ln[nextIndex] || (ln[index]==ln[nextIndex] && fn[index]==fn[nextIndex]))
			{
				//swap the entries
				swap(fn[index], fn[nextIndex]);
				swap(ln[index], ln[nextIndex]);
				swaps++;
				sorted = false;
			}
		}
		pass++;		
	}
	cout << "Comparisons: " << comps << endl;
	cout << "Swaps: " << swaps << endl;
}

int parse_line(const string &str,
		vector<string> &fields) {
	istringstream istr(str);
	string tmp;
	fields.clear();
	while (istr >> tmp) {
		DPRINTF("adding string %s\n", tmp.c_str());
		fields.push_back(tmp);
	}
	return (fields.size());
}

int main() {
	string str;
	vector<string> fields;
	vector<string> first_names;
	vector<string> last_names;
	ifstream in(INPUT);

	if (!in.good()) {
		cerr << "Invalid file: " << INPUT << endl;
		return (-1);
	}

	while (getline(in, str)) {
		// Extract the name from this line
		(void) parse_line(str, fields);

		// (optionally) print it
		// cout << "First name: " << FIRST_NAME(fields) << endl;
		// cout << "Last name: " << LAST_NAME(fields) << endl;

		// Add it to the unsorted arrays
		first_names.push_back(FIRST_NAME(fields));
		last_names.push_back(LAST_NAME(fields));

	}
	// Sort the array
	bsort(first_names, last_names);

	// Output the first and last values
	cout << "First name in sorted list: " << last_names[0] << ", "
	     << first_names[0] << endl;
	cout << "Last name in sorted list: " << last_names[last_names.size() - 1] << ", "
	     << first_names[last_names.size() - 1] << endl;
}
