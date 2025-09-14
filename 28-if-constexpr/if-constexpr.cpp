#include <iostream>
using namespace std;

int main () {
    constexpr bool condition {false};

    if constexpr (condition) {
        cout << "condition was true" << endl;
    } else {
        cout << "condition was false" << endl;
    }

    return 0;
}