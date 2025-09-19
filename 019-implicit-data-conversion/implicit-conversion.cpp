#include <iostream>
using namespace std

; int main () {
    /*
    all the data in an expresion must be of the same type
    so the compiler will implicitly convert all of them 
    into one type that is bigger in size (e.g. int -> double)
    */
    double price {45.5}
    ; int units {10}

    ; double total_price = price * units

    ; cout << "Total price: " << total_price << endl
    ; cout << "size of total price: " << sizeof(total_price) << endl //8

    /*
    another posibility is narrowing conversion
    in the example below, double will be converted
    to int and the floating part will be dropped
    */
    ; int x
    ; double y {33.79}
    ; x = y // here we go
    ; cout << "the value of y is: " << y << endl
    ; cout << "the size of y is: " << sizeof(y) << endl
    ; cout << "the value of x is: " << x << endl
    ; cout << "the size of x is: " << sizeof(x) << endl

    ; return 0 ;
}
