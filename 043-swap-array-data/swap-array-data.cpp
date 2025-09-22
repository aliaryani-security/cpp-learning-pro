#include <iostream>
using namespace std;

int main() {
    int arr0[]{1,2,3,4,5};
    int arr1[]{6,7,8,9,10};

    // print arr0
    cout << "arr0: ";
    for (size_t i{}; i < size(arr0); ++i) {
        cout << arr0[i] << " ";
    }
    cout << endl;

    // print arr1
    cout << "arr1: ";
    for (size_t i: arr1) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
