// This hash table implementation uses Open Addressing +
// Linear Probing to hash a simple key, value structure.
#include <iostream>
#include <cstdlib>
using namespace std;

struct entry {
    int key;
    int value;
    entry *next;
};

// Should be a prime number.
const int TABLE_SIZE = 19;
static entry *hashTable[TABLE_SIZE];

// This generates a hash bucket given a key.
int genKey(int key) {
    return (key % TABLE_SIZE);
}

int addNode(int key, int value) {
    int slot = genKey(key);
    int cmps = 1;
    entry *tmp = hashTable[slot];

    // Setup the new node
    entry *newNode = new entry;
    newNode->key = key;
    newNode->value = value;
    newNode->next = 0;

    cout << "hash key for key " << key << " is " << slot << endl;

    // The first case is no collisions -- the bucket has a NULL pointer.
    // Simply insert the node.
    if (tmp == 0) {
        hashTable[slot] = newNode;
    } else {
        // Here we have a collision.  Go to the end of the bucket
        while (tmp->next != 0) {
            tmp = tmp->next;
            cmps++;
        }
        // Add to the end
        tmp->next = newNode;
    }
    return (cmps);
}

// Lookup a node
int findNode(int key, int &value) {
    int slot = genKey(key);
    int cmps = 1;
    entry *tmp = hashTable[slot];
    cout << "hash key for key " << key << " is " << slot << endl;

    // Search the bucket for the key we want
    while (tmp && tmp->key != key) {
        cmps++;
        tmp = tmp->next;
    }

    // found
    if (tmp) {
        value = tmp->value;
        return (cmps);
    }
    // not found
    return (-1);
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
            cout << "Enter key: ";
            getline(cin, tmp);
            key = atoi(tmp.c_str());

            cout << "Enter value: ";
            getline(cin, tmp);
            value = atoi(tmp.c_str());

            cmps = addNode(key, value);
            cout << endl;
            cout << "Added, required " << cmps << " compares." << endl;
            cout << endl;
            break;
        case 2:
            cout << "Enter search key: ";
            getline(cin, tmp);
            key = atoi(tmp.c_str());
            cmps = findNode(key, value);
            cout << endl;
            if (cmps == -1) {
                cout << "Not found." << endl;
            } else {
                cout << "Found key: " << key << " value: " << value << "." << endl;
            }
            cout << endl;
            break;
        case -1:
            cout << "Done." << endl;
            return (0);
            break;
        }
    }
}
