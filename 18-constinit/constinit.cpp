#include <iostream>
using namespace std
/*
    `constinit` is a variable (not a constant) that is
    evaluated at runtime initialisation to prevent 
    undefined behaviours in static/global which we will
    cover later. ready? let's go
*/
// * it's always declared before the main()
; constinit int buffer_size {1024} 

; int main () {
    cout << "Buffer size: " << buffer_size << endl
    ; buffer_size += 512 // it can be changed
    ; cout << "Updated buffer size: " << buffer_size << endl

    ; return 0 ;
}