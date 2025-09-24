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

    return 0;
}
