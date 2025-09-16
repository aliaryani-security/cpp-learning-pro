#include <iostream>
using namespace std;

int main() {
    int random_number {rand()};
    cout << "random number: " << random_number << endl;
    // let's do a few of these here
    cout << endl << "***Start of the for loop***" << endl;
    int rand_num;
    for (int i {0}; i < 50; i++) {
        rand_num = rand();
        cout << "Random number: " << rand_num << endl;
    }

    return 0;
}
