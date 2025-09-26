#include <iostream>
using namespace std;

int main() {
    int int_data {33};
    double double_data {55};

    int& ref_int_data{int_data};
    double& ref_double_data{double_data};

    cout << "int_data: " << int_data << endl;
    cout << "&int_data: " << &int_data << endl;
    cout << "double_data: " << double_data << endl;
    cout << "&double_data: " << &double_data << endl;

    cout << "ref_int_data: " << ref_int_data << endl;
    cout << "&ref_int_data: " << &ref_int_data << endl;
    cout << "ref_double_data: " << ref_double_data << endl;
    cout << "&ref_double_data: " << &ref_double_data << endl;

    // change original data
    cout << endl;
    int_data = 37;
    double_data = 57;

    cout << "int_data: " << int_data << endl;
    cout << "&int_data: " << &int_data << endl;
    cout << "double_data: " << double_data << endl;
    cout << "&double_data: " << &double_data << endl;

    cout << "ref_int_data: " << ref_int_data << endl;
    cout << "&ref_int_data: " << &ref_int_data << endl;
    cout << "ref_double_data: " << ref_double_data << endl;
    cout << "&ref_double_data: " << &ref_double_data << endl;

    return 0;
}
