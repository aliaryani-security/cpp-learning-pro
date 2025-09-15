#include <iostream>
using namespace std;

const int Pen { 10 };
const int Marker { 20 };
const int Eraser { 30 };
const int Rectangle { 40 };

int main () {
    int tool {30};

    switch (double strength {3.56}; tool) {
        case Pen: {
            cout << "Active tool: Pen\nStrength: " << strength << endl;
        } break;
        case Marker: {
            cout << "Active tool: Marker\nStrength: " << strength << endl;
        } break;
        case Eraser: {
            cout << "Active tool: Eraser\nStrength: " << strength << endl;
        } break;
        case Rectangle: {
            cout << "Active tool: Rectangle\nStrength: " << strength << endl;
        } break;
        default: break;
    }

    return 0;
}