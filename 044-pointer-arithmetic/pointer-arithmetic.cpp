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

    // Distance between elements:
    int* pointer1 {scores + 0};
    int* pointer2 {scores + 8};
    cout << endl;
    cout << "pointer2 - pointer1: " << pointer2 - pointer1 << endl;
    cout << "pointer1 - pointer2: " << pointer1 - pointer2 << endl;

    // ptrdiff_t is a special type for storing pointer differences
    ptrdiff_t pos_diff {pointer2 - pointer1};
    ptrdiff_t neg_diff {pointer1 - pointer2};
    cout << endl;
    cout << "positive: " << pos_diff << endl;
    cout << "negative: " << neg_diff << endl;
    cout << "sizeof(ptrdiff_t): " << sizeof(ptrdiff_t) << endl;

    return 0;
}
