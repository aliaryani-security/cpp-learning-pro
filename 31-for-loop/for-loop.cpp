#include <iostream>
using namespace std;

int main () {
    for (int i {12}; i > 0; i--) {
        cout << i << " I love C++" << endl;
    }
    
    // multiple decalration in for loop
    for (int x {15}, y {20}, z {25}; y < 100; x += 5, y++, z -= 2) {
        cout << "X: " << x << " Y: " << y << " Z: " << z << endl;
    }

    return 0;
}