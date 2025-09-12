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

    ; return 0 ;
}
