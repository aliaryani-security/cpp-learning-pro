#include <iostream>
using namespace std;

int main () {
    int a {35};
    int b {72};
    int max;

    max = (a > b) ? a : b;
    cout << max << endl;

    int min {(a < b) ? a : b};
    cout << min << endl;

    return 0;
}