#include <iostream>
using namespace std

; int main() {
    // a constant is initialised like a variable,
    // but can never be changed after declaration
    const int age {35}
    // ; age = 54 // ! error: assignment of read-only variable ‘age’
    ; cout << "Age (which is a constant): " << age << endl

    ; return 0 ;
}