#include <iostream>
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
    
    return 0;
}
