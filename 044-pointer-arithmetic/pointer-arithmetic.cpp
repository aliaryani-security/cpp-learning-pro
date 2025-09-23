#include <cstddef>
#include <iostream>
#include <iterator>
using namespace std;

int main() {
    int scores[10] = {11,12,13,14,15,16,17,18,19,20};
    int* p_score {scores};

    cout << "values in scores array (p_score pointer increment):" << endl;
    cout << "Address: " << p_score << " value: " << *p_score << endl;
    ++p_score; // moves forward by sizeof(int) : 4 Bytes
    cout << "Address: " << p_score << " value: " << *p_score << endl;
    ++p_score; // moves forward by sizeof(int) : 4 Bytes
    cout << "Address: " << p_score << " value: " << *p_score << endl;
    ++p_score; // moves forward by sizeof(int) : 4 Bytes
    cout << "Address: " << p_score << " value: " << *p_score << endl;
    ++p_score; // moves forward by sizeof(int) : 4 Bytes
    cout << "Address: " << p_score << " value: " << *p_score << endl;
    ++p_score; // moves forward by sizeof(int) : 4 Bytes
    cout << "Address: " << p_score << " value: " << *p_score << endl;

    // explicit increment
    cout << endl;
    cout << "Explicit addition of integer:" << endl;
    p_score = scores; // reseting 
    cout << "scores[4]: " << *(p_score + 4) << endl;

    // increment using a for loop
    cout << endl;
    cout << "using a for loop:" << endl;
    for (size_t i{0}; i < size(scores) ; i++) {
        cout << "value: " << *(p_score + i) << endl;
    }

    // reverse order
    cout << endl;
    cout << "reverse order:" << endl;
    for (size_t i {size(scores)}; i > 0; --i) {
        cout << "value: " << *(p_score + i -1) << endl;
    }
    
    return 0;
}
