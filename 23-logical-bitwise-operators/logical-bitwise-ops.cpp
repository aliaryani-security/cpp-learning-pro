#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std

; int main() {
    int COLUMN_WIDTH {20}
    ; unsigned char value1 {0x3} // 0000 0011
    ; unsigned char value2 {0x5} // 0000 0101

    ; cout << setw(COLUMN_WIDTH) << "value 1: "
        << setw(COLUMN_WIDTH) << bitset<8>(value1) 
        << endl
    ; cout << setw(COLUMN_WIDTH) << "value 2: " 
        << setw(COLUMN_WIDTH) << bitset<8>(value2)
        << endl

    // AND
    ; cout << endl
    ; cout << "Bitwise AND: " << endl
    ; cout << setw(COLUMN_WIDTH) << "value1 & value2: "
        << setw(COLUMN_WIDTH) << bitset<8>(value1 & value2) // 0000 0001
        << endl 
    ; cout << endl

    // OR
    ; cout << endl
    ; cout << "Bitwise OR: " << endl
    ; cout << setw(COLUMN_WIDTH) << "value1 | value2"
        << setw(COLUMN_WIDTH) << bitset<8>(value1 | value2) // 0000 0111
        << endl
    ; cout << endl

    // NOT
    ; cout << endl
    ; cout << "Bitwise NOT: " << endl
    ; cout << setw(COLUMN_WIDTH) << "~01001100: "
        << setw(COLUMN_WIDTH) << bitset<8>(~0b01001100) //1011 0011
        << endl

    ; return 0 ;
}