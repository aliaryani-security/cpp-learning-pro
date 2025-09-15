#include <iostream>
using namespace std;

int main () {
    // declare the list of arrays
    int scores [10];

    // read data
    cout << "scores [0]: " << scores[0] << endl;

    // write data to array
    scores[0] = 12;
    scores[1] = 42;
    scores[2] = 1;
    scores[3] = 88;
    scores[4] = 33;
    scores[5] = 111;
    scores[6] = 1234;
    scores[7] = 2;
    scores[8] = 222;
    scores[9] = 783;

    // read using a loop
    for (int i:scores) {
        cout << "score: " << i << endl;
    }

    return 0;
}