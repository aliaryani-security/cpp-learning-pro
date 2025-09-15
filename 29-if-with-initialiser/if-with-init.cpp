#include <iostream>
using namespace std;

int main () {
    bool go {false};

    if (int speed {10}; go) {
        cout << "speed: " << speed << endl;
        if (speed > 5) {
            cout << "Slow Down!" << endl;
        } else {
            cout << "All Good!" << endl;
        }
    } else {
        cout << "Speed: " << speed << endl;
        cout << "Stop!" << endl;
    }
    // ! error: ‘speed’ was not declared in this scope
    // cout << "Out of the block. speed: " << speed << endl;

    return 0;
}