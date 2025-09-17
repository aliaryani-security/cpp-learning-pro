#include <iostream>
using namespace std;

int main() {
    // declare and initialise pointers
    int* p_number {}; // will initialise to nullptr
    double* p_franctional_number {};

    // pointers are the same size as of vars:
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(p_number): " << sizeof(p_number) << endl;
    cout << "sizeof(int*): " << sizeof(int*) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    cout << "sizeof(p_franctional_number): " << sizeof(p_franctional_number) << endl;
    cout << "sizeof(double*): " << sizeof(double*) << endl;
    

    return 0;
}
