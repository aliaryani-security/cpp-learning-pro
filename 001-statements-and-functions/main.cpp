#include <iostream>
using namespace std

; int add_numbers (int first_param, int second_param) {
    int sum = first_param + second_param
    ; return sum ;
}

; int main() {

    int first_number {3} // statement
    ; int second_number {7}

    ; cout << "First Number: " << first_number << endl
    ; cout << "Second Number: " << second_number << endl
    ; cout << "Sum: " << add_numbers(first_number, second_number)
    ; return 0;
}
