// A simple hash table implementation
#include <iostream>
#include <cstdlib>
using namespace std;

struct entry {
    int key;
    int value;
    entry *next;
};

// Should be prime
const int TABLE_SIZE = 19;
static entry *hashTable[TABLE_SIZE];

// Generate a hash key for a given node key
int genKey(int key) {
}

// Add a node to the hash ((k, v) pair)
int addNode(int key, int value) {
}

// Find a node in the hash
int findNode(int key, int &value) {
}

int main() {

    for (;;) {
        string tmp;
        int choice;
        int cmps = 0;
        int key, value;

        cout << "Dictionary with a hash" << endl;
        cout << "----------------------" << endl;
        cout << "1) Add" << endl;
        cout << "2) Lookup" << endl;
        cout << "Enter your choice (-1 to quit): ";
        getline(cin, tmp);
        choice = atoi(tmp.c_str());
        switch (choice) {
        case 1:
            break;
        case 2:
            cout << endl;
            break;
        case -1:
            cout << "Done." << endl;
            return (0);
            break;
        }
    }
}



