#include <cstddef>
#include <exception>
#include <iostream>
#include <new>
using namespace std;

int main() {
    // int* data = new int[10000000000000];
    /*
    for(size_t i{0}; i < 1000000000;++i) {
        int* data = new int[1000000000];
    } 
    */

/*    for(size_t i{0}; i < 1000000000; ++i) {
        try {
            int* data = new int[1000000000];
        }catch(exception& ex){
            cout << "something went wrong: " << ex.what() << endl;
        }
    }*/
    //exception: std::nothrow
    for (size_t i{0};i < 100;++i) {
        int* data = new(nothrow) int[10000000000000];
        if (data != nullptr) {
            cout << "data allocated." << endl;
        }else{
            cout << "data allocation failed." << endl;
        }
    }
    
    cout << "program ending well!" << endl;

    return 0;
}
