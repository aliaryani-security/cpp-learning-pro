#include <iostream>
using namespace std;

int main() {
    // verbose nullptr check
    cout << "verbose nullptr check:" << endl;

    int* p_number{}; //initialised to nullptr
    
    if(!(p_number==nullptr)){
        cout << "p_number points to a valid address: " << p_number << endl;
    }else{
        cout << "p_number points to an invalid address" << endl;
    }

    return 0;
}
