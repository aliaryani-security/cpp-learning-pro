#include <iostream>
using namespace std

; int main () {
    /*
    explicit conversions are supposed to 
    be done by you, the developer.
    we do this using `static_cast<T>(var)`
    */
    double x {16.93}
    ; double y {70.14}
    // implicit way:
    ; int sum = x + y
    ; cout << "sum: " << sum << endl
    ; cout << "size of sum: " << sizeof(sum) <<endl
    ; cout << endl
    // explicit way:
    ; sum = static_cast<int>(x) + static_cast<int>(y)
    ; cout << "explicit sum: " << sum << endl
    ; cout << "size of explicit sum: " << sizeof(sum) << endl

    ; return 0 ;
}