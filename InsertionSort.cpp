#include <iostream>
#include <vector>
#include <cassert>
#include "BinaryInsertionSort.h"
#include "Node.h"
#include "YourClass.h"
using namespace std;

int main() {

    vector<YourClass> a;
    a = {10, 25, 1, 6, 98};

    vector<YourClass> v;
    v = a;

    // populate the vector with the data from your data set

    // binary insertion sort
    insertionSort(v, v.size());

    // check if sorted
    for (int i = 1; i < v.size(); i++) {
        assert(v[i - 1] <= v.at(i));
    }

    // print out sorted list
    for (int i = 0; i < v.size(); i++) {
        //you should ovrride << to YourClass
        cout << v.at(i) << endl;
    }


}


//