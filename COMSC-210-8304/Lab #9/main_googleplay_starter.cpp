#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdlib>
using namespace std;

#define FILENAME "googleplay.csv"

// A single app in the Google Play Store
typedef struct {
    string name;
    string category;
    double rating;
    int reviews;
} googlePlayApp;

// Starting size, adjust as needed -- should be prime.
// You may need a larger hash depending on the effectiveness
// of your hash function.
const int HASH_SIZE = 10007;

// Hash table for all of the apps -- static so it's zeroed
static googlePlayApp *appHash[HASH_SIZE];

// Reads a single app, filling in the
// fields (name, etc.) passed by the caller
void readSingleApp(const string &str,
        googlePlayApp &newApp) {

    istringstream istr(str);
    string fields[5];
    string tmp;
    int i = 0;

    while (getline(istr, tmp, ',')) {
        fields[i++] = tmp;
    }
    newApp.name = fields[0];
    newApp.category = fields[1];
    newApp.rating = atof(fields[2].c_str());
    newApp.reviews = atoi(fields[3].c_str());
}

// Insert a new app into the hash table
void appInsert(googlePlayApp &newApp) {
    int key = 0;
    for (int i = 0; i < newApp.name.size(); i++)
    {
        key = key + newApp.name[i]+newApp.name[i];
    }
    int num = key % HASH_SIZE;
    googlePlayApp *tp = appHash[num];
    googlePlayApp *temp = new googlePlayApp;
    temp->name = newApp.name;
    temp->category = newApp.category;
    temp->rating = newApp.rating;
    temp->reviews = newApp.reviews;
    if (tp == 0)
    {
        appHash[num] = temp;
    }
    else 
    {
        num = 0;
        while (appHash[num] != 0 && num <= HASH_SIZE)
        {
            num++;
        } 
        appHash[num] = temp;
    }
}

// Find an app in the hash table
// Returns 'true' if the app was found, filling in the
// fields of 'foundApp', else false.
bool appFind(const string &name, googlePlayApp &foundApp) {
    int key = 0;
    for (int i = 0; i < name.size(); i++)
    {
        key = key + name[i]+name[i];
    }
    int num = key % HASH_SIZE;
    if (appHash[num] != 0 && appHash[num]->name == name)
    {
        foundApp = *appHash[num];
        return true;
    }
    else 
    {
        for (int i = 0; i < HASH_SIZE; i++)
        {
            if (appHash[i] != 0 && appHash[i]->name == name)
            {
                foundApp = *appHash[i];
                return true;
            }
        }
    }
    return false;
}

int main() {
    ifstream inFile(FILENAME);
    string inputLine, inputStr;
    int linesRead = 0;

    // Read in each app entry
    while (getline(inFile, inputLine)) {
        googlePlayApp newApp;
        readSingleApp(inputLine, newApp);
        appInsert(newApp);
        linesRead++;
        // For extra debugging output
        //if (linesRead % 1000 == 0)
        //    cout << "Inserted " << linesRead << " entries"
        //         << endl;
    }
    if (linesRead == 0) {
        cerr << "Reading failed." << endl;
        return (-1);
    } else {
        cout << "Read " << linesRead << " apps." << endl;
    }

    for (;;) {
        string tmp;
        googlePlayApp foundApp;
        cout << "Enter an app name (<return> to quit): ";
        getline(cin, tmp);
        if (tmp == "") {
            break;
        }
        if (appFind(tmp, foundApp) == false) {
            cout << "Not found in the database." << endl;
            continue;
        }

        // Output the app info here
        cout << "Name: " << foundApp.name << endl;
        cout << "Category: " << foundApp.category << endl;
        cout << "Rating: " << foundApp.rating << endl;
        cout << "Reviews: " << foundApp.reviews << endl;
        // ...
    }
    return (0);
}
