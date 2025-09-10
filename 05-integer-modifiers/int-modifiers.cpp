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
    
    //short and long int
    ; short short_var {-32768} // 2 bytes
    ; short int short_int {32767} // bytes
    ; cout << "Size of short_var: " << sizeof(short_var)
        << endl << "Size of short_int: " << sizeof(short_var)
        << endl
    // * can also use `signed short`, `signed short int`, etc.
    ; long long_var {88} // 4 OR 8 bytes
    ; long int long_int {769}
    ; cout << "Long var: " << long_var << "; size of it: " << sizeof(long_var)
        << endl << "Long int: " << long_int << "; size of it: " << sizeof(long_int)
        << endl 
    ; long long long_long {123453545435} // 8 bytes
    ; cout << "long long: " << long_long
        << "; it's size: " << sizeof(long_long)
        << endl
    ; long long int long_long_int {-234324324324}
    ; cout << "long long int: " << long_long_int
        << "; it's size: " << sizeof(long_long_int)
        << endl
    // can also use `signed` and `unsigned` here.

    ; return 0 ;
}