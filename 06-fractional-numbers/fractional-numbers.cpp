#include <iostream>
#include <iomanip>
using namespace std

; int main () {
    float float_number {1.1234567890123456789f}
    ; double double_number {1.1234567890123456789}
    ; long double long_double_number {1.12345678901234567890123456789L}
    ; cout << setprecision(20) // setting precision. a part of iomainip
    // * it will be 20 characters long or something
    // * for float or double that can't be that big,
    // * the rest will be random garbage
    ; cout << "float number: " << float_number <<
        endl << "Size of float number: "
        << sizeof(float_number) << endl
    ; cout << "double number: " << double_number <<
        endl << "Size of double number: "
        << sizeof(double_number) << endl
    ; cout << "Long double number: " << long_double_number
        << endl << "Size of long double number: " <<
        sizeof(long_double_number) << endl
    
    ; return 0 ;
}