#include <iostream>

using namespace std;

// Array formulas
#define LEFT_CHILD(x)    (((x) * 2) + 1)
#define RIGHT_CHILD(x)   (((x) * 2) + 2)
#define PARENT(x)        (((x) - 1) / 2)

void dumpHeap(int a[], int n)
{
    cout<< "heap: ";
    for (int i =0; i<n; i++)
    {
        
    }
}

int main() {
    int *a;
    const int NUM = 5;
    a = new int[NUM];

    a[0] = 12;
    a[1] = 15;
    a[2] = 88;
    a[3] = 20;
    a[4] = 28;

    // Basic "heapify" loop... 1-2 optimizations possible here?
    for (int i = NUM / 2; i >= 0; i--) {
        int lc_index = LEFT_CHILD(i);
        int rc_index = RIGHT_CHILD(i);
        int swap_index = -1;

        // Check if there is a left child, see if we need to swap
        if (lc_index < NUM && a[lc_index] > a[i])
            swap_index = lc_index;

        // Check if there is a right child, see if it's bigger, and
        // if we need to swap
        if (rc_index < NUM && a[rc_index] > a[i] &&
            a[rc_index] > a[lc_index])
            swap_index = rc_index;

        // Do the swap if needed
        if (swap_index != -1) {
            cout << "swapping " << a[swap_index] << " with "
                 << a[i] << endl;
            swap(a[swap_index], a[i]);
        }
    }
    return 0;
}
