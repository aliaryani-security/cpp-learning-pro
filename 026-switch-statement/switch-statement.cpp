#include <iostream>
using namespace std;

const int Pen { 10 };
const int Marker { 20 };
const int Eraser { 30 };
const int Rectangle { 40 };
const int Circle { 50 };
const int Ellipse { 60 };

int main () {
    int tool { Marker };

    switch (tool) {
        case Pen: {
            cout << "pen" << endl;
        } break;
        case Marker: {
            cout << "marker" << endl;
        } break;
        case Eraser: {
            cout << "eraser" << endl;
        } break;
        case Rectangle: {
            cout << "rectangle" << endl;
        } break;
        case Circle: {
            cout << "circle" << endl;
        } break;
        case Ellipse: {
            cout << "ellipse" << endl;
        } break;
        default:
            break;
    }

    return 0;
}