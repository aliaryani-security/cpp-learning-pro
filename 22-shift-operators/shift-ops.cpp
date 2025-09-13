#include <iostream>
#include <bitset>
using namespace std

; int main () {

    unsigned short int value {0xff0u}
    ; cout << "Size of short int: " << sizeof(short int) << endl // 16
    
    ; cout << "value: " << bitset<16>(value) << endl // 0000111111110000

    ; return 0 ;
}