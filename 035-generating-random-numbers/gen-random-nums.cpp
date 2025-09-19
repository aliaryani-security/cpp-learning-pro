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
    
    // limiting the range is a bit tricky
    int num1 {rand() % 11}; // [ 0 ~ 10]
    cout << "num1: " << num1 << endl;
    // for a better understanding, let's use a range.
    for (int i {1}; i < 20; i++) {
        num1 = rand() % 11;
        cout << "num1 in loop: " << num1 << endl;
    }

    // srand()
    // srand() sets the default starting point of rand()
    srand(-12);
    cout << rand() << endl;


    return 0;
}
