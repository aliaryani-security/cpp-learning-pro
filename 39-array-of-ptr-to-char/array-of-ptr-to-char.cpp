#include <iostream>
using namespace std;

int main() {
    // to create an array of strings, we had to use
    // multi-dimensional arrays, like `char array_of_strings [][90] {...}`
    // but not anymore. let's do something using pointers!
    char first_array [][30] {
        "Hello, how are you?",
        "Life is sweet, or is it?",
        "Darkness settles in...",
    };
    // and the new way :
    const char* second_array [] {
        "Hello, how are you?",
        "Life is sweet, or is it?",
        "Darkness settles in..."
    };

    return 0;
}
