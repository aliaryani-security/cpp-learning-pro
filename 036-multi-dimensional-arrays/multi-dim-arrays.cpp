#include <cstddef>
#include <iostream>
using namespace std;

int main() {
    const size_t name_length{15};
    char members [][name_length] {
        "John",
         "Mark",
         "Andrew",
         "Abby"
    };
    // printing out members
    cout << "Printing out members:" << endl;
    for (size_t i {0}; i < size(members); ++i) {
        cout << members[i] << endl;
    }
    return 0;
}
