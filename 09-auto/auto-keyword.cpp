#include <iostream>
using namespace std

; int main () {
    // with the help of `auto` we can ask the
    // compiler to deduce the type of variable
    auto var1 {12}
    ; auto var2 {12.0}
    ; auto var3 {12.0f}
    ; auto var4 {12.0l}
    ; auto var5 {'c'}

    // int modifiers
    ; auto var6 {123u}
    ; auto var7 {123ul}
    ; auto var8 {123ll}

    ; cout << sizeof(var8) << endl
        << sizeof(var5) << endl
        << sizeof (var2) << endl

    ; return 0 ;
}