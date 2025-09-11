#include <iostream>
using namespace std

; int main () {
    bool red_light {true}
    ; if (red_light == true) {
        cout << "Stop!" << endl;
    } else {
        cout << "Keep going!" << endl;
    }
    // print out bools:
    cout << red_light << endl // will return 1, which means true
    ; cout << boolalpha // std::boolalpha will help us see true instead of 1
    ; cout << red_light << endl

    ; return 0 ;
}