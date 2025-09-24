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
    cout << "*p_number2: " << *p_number2 << endl;

    // initialising pointer to null:
    int* p_number3 {nullptr};
    cout << endl;
    // cout << "writing data to nullptr memory:" << endl;
    // *p_number3 = 33;
    // cout << "Done writing." << endl;
    cout << "reading through nullptr:" << endl;
    cout << "p_number3: " << p_number3 << endl;
    cout << "*p_number3: " << *p_number3 << endl; // error
    */

    // ***Dynamic Heap Memory** //
    int* p_number4 {nullptr};
    p_number4 = new int; // Dynamically allocate space for a single int on the heap 
                         // This space belongs to our program from now on, and system
                         // cannot use it for anything else, until we return it.
    *p_number4 = 77; // writing into dynamically allocated memory
    cout << endl;
    cout << "dynamic memory allocation:" << endl;
    cout << "*p_number4: " << *p_number4 << endl;

    // returning memory to the OS
    delete p_number4;
    p_number4 = nullptr;

    return 0;
}
