#include <iostream>
using namespace std;

int main() {
    int scores [10] {11,12,13,14,15,16,17,18,19,20};
    int* p_score {scores};

    // print addresses
    cout << "scores: " << scores << endl;
    cout << "p_score: " << p_score << endl;

    // print content at that address
    cout << endl;
    cout << "printing data at array address:" << endl;
    cout << "*scores: " << *scores << endl;
    cout << "scores[0]: " << scores[0] << endl;
    cout << "*p_score: " << *p_score << endl;
    cout << "p_score[0]: " << p_score[0] << endl;

    return 0;
}
