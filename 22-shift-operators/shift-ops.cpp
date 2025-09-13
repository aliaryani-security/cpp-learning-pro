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
    // now let's shift left by two bits
    ; cout << "shifting left by 2 bits" << endl
    ; value = static_cast<unsigned short int>(value << 2)
    ; cout << "value: " << bitset<16>(value) << endl // 1111111100000000
        << "value in decimal: " << value << endl // 65280
    // and this is where the real game starts !...
    ; cout << endl << "final left shifting" << endl
    ; value = static_cast<unsigned short int>(value << 1) // and boom!
    ; cout << "value: " << bitset<16>(value) << endl // 1111111000000000
        << "value in decimal: " << value << endl // 65024
        // ? as you see, the values are changed a lot
        // * it's because we have lost one of the `1`s
    
    // let's shift by one bit to the right
    ; cout << endl << "shifting right: " << endl
    ; value = static_cast<unsigned short int>(value >> 1)
    ; cout << "value: " << bitset<16>(value) << endl // 0111111100000000
        << "value in decimal: " << value << endl // 32512

    ; return 0 ;
}