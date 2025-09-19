#include <iostream>
using namespace std;

int main () {
    int i {1};
    while (i < 10) {
        cout << i << " I love C++" << endl;
        i++;
    }
    // do while loop
    cout << endl;
    i = 0;
    do {
        cout << i << " I love C++" << endl;
        i++;
    } while (i < 10000); // feel the power 😂

    return 0;
}