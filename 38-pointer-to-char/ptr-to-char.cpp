#include <iostream>
using namespace std;

int main () {
    char* message {"Hello World"}; // This is not a good thing to do. C++ gives us a warning.
    cout << "message: " << message << endl;
    cout << "*message: " << *message << endl;

    return 0;
}
