#include <iostream>
#include <string>
using namespace std

; int main () {
    // printing stuff 
    cout << "Hello World" << endl
    // printing errors
    ; cerr << "Something went wrong" << endl
    // log message
    ; clog << "A log message" << endl

    // input
    ; string name
    ; cout << "What's your name? =>"
    ; cin >> name
    ; cout << "Hello " << name << "!" << endl
    // multi input in std::cin
    ; int age
    ; cout << "Enter your name and age. seperate with spaces. => "
    ; cin >> name >> age
    ; cout << "Hello " << name << "! You are " << age << " years old." << endl
    // reading data that contains spaces
    ; string full_name
    ; cout << "What's your full name? => "
    ; cin.ignore()
    ; getline(cin, full_name);
    ; cout << "Hello " << full_name << "!" << endl

    ; return 0 ;
}