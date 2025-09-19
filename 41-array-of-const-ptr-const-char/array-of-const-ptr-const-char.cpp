#include <iostream>
using namespace std;

int main () {
    const char* students [] {
        "John Doe",
        "Frank Sinatra",
        "Nancy Sinatra",
        "Doris Day",
        "Edith Piaf"
    };
    
    // print out the students
    cout << endl;
    cout << "Printing out the students:" << endl;
    for (const char* student: students) {
        cout << student << endl;
    }

    //*students[0] = 'K'; // compiler error

    // can swap for a new student though
    const char* new_student {"Bob the Great"};
    students[0] = new_student;
    cout << endl;
    cout << "Printing out the students:" << endl;
    for (const char* student: students) {
        cout << student << endl;
    }

    return 0;
}

