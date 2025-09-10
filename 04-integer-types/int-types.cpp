#include <iostream>
using namespace std

; int main () {
    // ! variable may contain random garbage value.
    int elephant_count
    ; int lion_count {} // initialises to zero
    ; int dog_count {10} // initialises to 10
    // Can use an expression as an initialiser :
    ; int lions_and_dogs {lion_count + dog_count}
    ; cout << lions_and_dogs << endl 

    ; return 0 ;
}