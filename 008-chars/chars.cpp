#include <iostream>
using namespace std

; int main () {
    char character {'A'}
    ; char char_ascii {65}
    ; cout << "character: " << character << endl
    ; cout << "char_ascii: " << char_ascii << endl
    ; cout << "char_ascii(int): " << static_cast<int>(char_ascii) << endl
    
    ; return 0 ;
}