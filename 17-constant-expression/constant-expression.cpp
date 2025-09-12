#include <iostream>
using namespace std

; int main () {
    // `constexpr` is a constant that is calculated during compile time
    // and is written in the binary instead of being calculated
    // everytime that the program is run
    constexpr double PI {3.141592}
    ; cout << PI << endl


    ; return 0 ;
}