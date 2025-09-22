#include <cstddef>
#include <iostream>
#include <iterator>
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

    /*
    // swapping arrays the hard way:
    int temp[5];
    // move data from arr1 to temp
    for (size_t i{0};i < size(arr1); ++i) {
        temp[i] = arr1[i];
    }
    // move data from arr0 to arr1
    for (size_t i{}; i < size(arr0); ++i) {
        arr1[i] = arr0[i];
    }
    // move data from temp to arr0
    for(size_t i{};i<size(temp);++i){
        arr0[i] = temp[i];
    }*/

    // swapping using pointers
    int* temp{nullptr};
    int* p_arr0 {arr0};
    int* p_arr1 {arr1};

    temp = p_arr1;
    p_arr1 = p_arr0;
    p_arr0 = temp;

    // print arr0
    cout << "arr0: ";
    for (size_t i{}; i < size(arr0); ++i) {
        cout << p_arr0[i] << " ";
    }
    cout << endl;

    // print arr1
    cout << "arr1: ";
    for (size_t i{}; i < size(arr0);++i) {
        cout << p_arr1[i] << " ";
    }
    cout << endl;


    return 0;
}
