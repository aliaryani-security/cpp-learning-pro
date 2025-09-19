#include <iostream>
using namespace std

; int main () {
    // `constexpr` is a constant that is calculated during compile time
    // and is written in the binary instead of being calculated
    // everytime that the program is run
    constexpr double PI {3.141592}
    ; cout << PI << endl
    
    // we can write a condition to check if something
    // like a library has the version needed for our program
    ; constexpr double EXAMPLE_LIB_VER {1.23}
    // and here is the condition:
    ; static_assert(EXAMPLE_LIB_VER == 1.23)
    // ; static_assert (EXAMPLE_LIB_VER == 1.24) // ! error: static assertion failed

    ; return 0 ;
}