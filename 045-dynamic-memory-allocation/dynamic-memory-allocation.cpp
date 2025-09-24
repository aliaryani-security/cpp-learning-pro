#include <iostream>
using namespace std;

int main() {
    // what we have seen so far:
    int number {22};

    int* p_number {&number};

    cout << endl;
    cout << "Declaring pointer and assigning address:" << endl;
    cout << "number: " << number << endl;
    cout << "p_number: " << p_number << endl;
    cout << "&number: " << &number << endl;
    cout << "*p_number: " << *p_number << endl;

    int* p_number1; //uninitialised, contains junk address
    int number1 {12};
    p_number1 = &number1; // make it point to a valid address
    cout << endl;
    cout << "uninitialised pointer:" << endl;
    cout << "*p_number1: " << *p_number1 << endl;
/*
    // ! BAD THINGS THAT SHALL NOT BE EVER DONE
    // ! writing into uninitialised pointer through reference
    int* p_number2;
    cout << "writing into uninitialised pointer:" << endl;
    *p_number2 = 55;
    cout << "printing it out:" << endl;
    cout << "p_number2: " << p_number2 << endl;
    cout << "dereferencing bad memory:" << endl;
    cout << "*p_number2: " << *p_number2 << endl; */

    return 0;
}
