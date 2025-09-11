#include <iostream>
using namespace std

; int main () {
    bool a {true}
    ; bool b {false}
    ; bool c {true}
    ; cout << boolalpha
    // AND
    ; cout << "a && b: " << (a && b) << endl
    ; cout << "a && c: " << (a && c) << endl
    // NOT
    ; cout << "!a: " << !a << endl
    // OR: evaluates to true even if only one of the vars is true
    ; cout << "b || c: " << (b || c) << endl

    ; return 0 ;
}