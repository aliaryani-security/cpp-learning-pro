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
    cout << endl;

    // change the pointer itself and point somewhere else
    cout << "Changing pointer to point somewhere else: " << endl;
    int number2 {53};
    p_number1 = &number2;
    cout << "p_number1: " << p_number1 << endl;
    cout << "*p_number1: " << *p_number1 << endl;
    cout << "number1: " << number1 << endl;
    cout << "number2: " << number2 << endl;
    cout << endl;

    // pointer to const
    // you cannot modify the data through pointer
    cout << "mutable pointer, pointed to const:" << endl;
    int number3 {233}; // although you can omit the `const` keyword in front
                       // and your code will be compiled without any errors,
                       // it's still recommended to be as explicit as possible
                       // and put the const in front. Make your intentions clear.
    const int* p_number3 {&number3}; // can't modify number3 through p_number3

    cout << "p_number3: " << p_number3 << endl;
    cout << "*p_number3: " << *p_number3 << endl;
    cout << endl;
    // *p_number3 = 12; //! compiler error

    // although we can't change the value through pointer,
    // we can change where the pointer is pointing
    int number4 {712};
    p_number3 = &number4;
    cout << "p_number3: " << p_number3 << endl;
    cout << "*p_number3: " << *p_number3 << endl;
    cout << endl;
    // you can't set up a mutable pointer to const data
    const int some_data {63};
    // int* p_some_data {&some_data}; // compiler error

    // both pointer and data are immutable
    const int number5 {9523};
    const int* const p_number5 {&number5};
    cout << "pointer is immutable, value is immutable:" << endl;
    cout << "p_number5: " << p_number5 << endl;
    cout << "*p_number5: " << *p_number5 << endl;
    // can't modify any of them
    // number5 = 12; // compiler error
    // p_number5 = &number1; // compiler error
    // *p_number5 = 44; // compiler error

    return 0;
}
