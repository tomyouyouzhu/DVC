#include <iostream>
#include <bitset>
#include <functional>
#include <string>
using namespace std;

int main() {
    const int NAPPS = 5;
    size_t bf[4] = { 0 };
    hash<string> hf;

    // This is our set of keys
    string apps[NAPPS] = {
        "HAL-9000 - FN Theme",
        "Popsicle Sticks and Similar DIY Craft Ideas",
        "Minecraft Classic Edition",
        "My Earthquake Alerts - US & Worldwide Earthquakes",
        "Gas Prices (Germany only)"
    };

    // First "load" the filter
    for (int i = 0; i < NAPPS; i++) {

        // Compute the unified hash string
        // Assumes the key is long enough.
        for (int j = 0; j < 4; j++) {
            bf[j] |= hf(apps[i].substr(j * 2, 2));
        }
        // Uncomment to see the filter at each stage
        //cout << "Filter[0]: " << bitset<64>(bf[0]) << endl;
        //cout << "Filter[1]: " << bitset<64>(bf[1]) << endl;
        //cout << "Filter[2]: " << bitset<64>(bf[2]) << endl;
        //cout << "Filter[3]: " << bitset<64>(bf[3]) << endl;
        cout << endl;
    }

    cout << "Final filter: " << endl;
    cout << "Filter[0]: " << bitset<64>(bf[0]) << endl;
    cout << "Filter[1]: " << bitset<64>(bf[1]) << endl;
    cout << "Filter[2]: " << bitset<64>(bf[2]) << endl;
    cout << "Filter[3]: " << bitset<64>(bf[3]) << endl;

    cout << "Updated filter with " << NAPPS
         << " entries, " << endl;

    string tmp;
    while (tmp.length() < 12) {
            cout << "Enter a key to find: " << endl;
            getline(cin, tmp);
    }

    // Compute the hash value
    size_t testk[4];
    for (int j = 0; j < 4; j++) {
        testk[j] |= hf(tmp.substr(j * 2, 2));
    }
    cout << "Bits to test:" << endl;
    cout << "[0]: " << bitset<64>(testk[0]) << endl;
    cout << "[1]: " << bitset<64>(testk[1]) << endl;
    cout << "[2]: " << bitset<64>(testk[2]) << endl;
    cout << "[3]: " << bitset<64>(testk[3]) << endl;

    for (int idx = 0; idx < 4; idx++) {
        for (int i = 0; i < sizeof(size_t); i++) {
            int bit1 = bf[idx] & (1 << i);
            int bit2 = testk[idx] & (1 << i);
            if (bit2 && !bit1) {
                cout << "That is definitely NOT in the set."
                     << endl;
                return (1);
            }
        }
    }
    cout << "That key MAY be in the set." << endl;
    return (1);
}
