#include <iostream>
using namespace std;

int main () {
    // a raw variable that can be modified
    cout << endl;
    cout << "Raw variable that can be modified: " << endl;

    int number {5}; // not a const, can be changed anytime you want
    cout << "number: " << number << endl;
    cout << "&number: " << &number << endl;
    // modify
    number = 12;
    number += 7;
    cout << "number: " << number << endl;
    cout << "&number: " << &number << endl;
    cout << endl;

    return 0;
}
