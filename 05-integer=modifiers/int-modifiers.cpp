#include <iostream>
using namespace std

; int main () {
    // positive, negative
    int value1 {100}
    ; int value2 {-200}
    // you can also use `signed int` and `unsigned int`
    ; cout << "Value 1: " << value1 << endl
    ; cout << "Size of value 1: " << sizeof(value1) << endl
    ; cout << "Value 2: " << value2 << endl
    ; cout << "Size of value 2: " << sizeof(value2) << endl
    
    ; return 0 ;
}