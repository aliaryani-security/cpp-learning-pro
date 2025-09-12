#include <iostream>
#include <bitset>
using namespace std

; int main () {
    unsigned short int data {15}
    
    ; cout << "data (decimal): " << showbase << dec << data << endl
    ; cout << "data (octal): " << showbase << oct << data << endl
    ; cout << "data (hex): " << showbase << hex << data << endl

    ; cout << "data (binary): "
        << bitset<16>(data) /*data is unsigned short and therefore 16 bits*/
        << endl


    ; return 0 ;
}