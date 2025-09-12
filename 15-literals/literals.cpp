#include <iostream>
using namespace std

; int main () {
    // a literal is a fixed data that is written directly in code
    // in the example below, value might change, but 22 is always 22
    int value {22}
    ; cout << value << endl
    ; cout << 22 << endl
    ; cout << endl

    ; value = 74
    ; cout << value << endl // now 74
    ; cout << 22 << endl // still 22
    // All the things we covered before (like `166u` which means unsigned),
    // are literals. also characters, floats and doubles, etc.

    ; return 0 ;
}