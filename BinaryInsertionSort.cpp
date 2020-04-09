#include "BinaryInsertionSort.h"
using namespace std;

YourClass binarySearch(vector<YourClass> a, YourClass item, YourClass low, YourClass high) {
    if (high <= low) {
        return (item > a[low] ? (low + 1) : low);
    }

    // middle index
    YourClass mid = (low + high) / 2;

    // found it
    if (item == a[mid])
        return mid + 1;

    if (item > a[mid])
        return binarySearch(a, item, mid + 1, high); // look right
    else
        return binarySearch(a, item, low, mid - 1); // look left
}

void insertionSort(vector<YourClass> &a, int n) {

    for (int i = 1; i < n; i++) {
        unsigned int j = i - 1;
        YourClass selected = a[i];

        // find location where selected should be inserted
        YourClass loc = binarySearch(a, selected, 0, j);

        // move all elements after location to create space
        while (j >= loc) {
            a[j + 1] = a[j];
            j--;
        }
        a[loc] = selected;
    }
}
