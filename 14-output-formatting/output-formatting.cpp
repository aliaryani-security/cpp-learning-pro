#include <iostream>
#include <iomanip>
using namespace std

; int main () {
    cout << "Unformatted table:" << endl
    ; cout << "Daniel" << " " << "Grey" << " 25" << endl
    ; cout << "John" << " " << "Smith" << " 34" << endl
    ; cout << "stanley" << " " << "Woods" << " 74" << endl

    ; cout << endl
    ; cout << "Formatted Table:" << endl

    ; cout << setw(10) << "First Name:" << setw(10) 
        << "Last Name:" << setw(5) << "Age:" << endl
    ; cout << setw(10) << "Daniel" << setw(10)
        << "Grey" << setw(5) << "25" << endl
    ; cout << setw(10) << "John" << setw(10)
        << "Smith" << setw(5) << "34" << endl
    ; cout << setw(10) << "Stanley" << setw(10)
        << "Woods" << setw(5) << "74" << endl

    ; return 0 ;
}