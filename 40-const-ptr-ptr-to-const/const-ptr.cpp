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

    // pointer: can modify the data and the pointer itself
    int* p_number1 {nullptr};
    int number1 {23};
    p_number1 = &number1;
    cout << "pointer and value are both mutable:" <<endl;
    cout << "p_number1: " << p_number1 << endl;
    cout << "number1: " << number1 << endl;
    cout << "*p_number1: " << *p_number1 << endl;
    cout << endl;

    // modify using pointer
    cout << "modifying number1 through pointer: " << endl;
    *p_number1 = 72;
    cout << "p_number1: " << p_number1 << endl;
    cout << "number1: " << number1 << endl;
    cout << "*p_number1: " << *p_number1 << endl;

    return 0;
}
