#include <iostream>
#include <bitset>
using namespace std

; int main () {

    unsigned short int value {0xff0u}
    ; cout << "Size of short int: " << sizeof(short int) << endl // 16
    
    ; cout << "value: " << bitset<16>(value) << endl // 0000111111110000
        << "value in decimal: " << value << endl // 4080

    // let's shift left by one bit
    ; cout << "Left shifting" << endl
    ; value = static_cast<unsigned short int>(value << 1)
    ; cout << "value: " << bitset<16>(value) << endl // 0001111111100000
        << "value in decimal: " << value << endl // 8160
    // let's shift left by one bit, again
    ; cout << "left shifting, again" << endl
    ; value = static_cast<unsigned short int>(value << 1)
    ; cout << "value: " << bitset<16>(value) << endl // 0011111111000000
        << "value in decimal: " << value << endl // 16320

    ; return 0 ;
}