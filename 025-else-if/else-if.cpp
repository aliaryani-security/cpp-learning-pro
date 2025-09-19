#include <iostream>
using namespace std;

// Tools
const int Pen { 10 };
const int Marker { 20 };
const int Eraser { 30 };
const int Rectangle { 40 };
const int Circle { 50 };
const int Ellipse { 60 };

int main () {
    int tool {Circle};

    if (tool == Pen) {
        cout << "The active tool is Pen" << endl;
    } else if (tool == Marker) {
        cout << "The active tool is Marker" << endl;
    } else if (tool == Eraser) {
        cout << "The active tool is Eraser" << endl;
    } else if (tool == Rectangle) {
        cout << "The active tool is Rectangle" << endl;
    } else if (tool == Circle) {
        cout << "The active tool is Circle" << endl;
    } else if (tool == Ellipse) {
        cout << "The active tool is Ellipse" << endl;
    }

    return 0;
}