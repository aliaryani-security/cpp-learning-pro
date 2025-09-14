#include <iostream>
using namespace std;

/*
I hereby annouce the end of ***Semicolon-First*** style practice
So far I've done 23 scriptings using it, I liked it, but I just
can't keep it going, people are going to suffer from it, I know that 😂
I'll write the article about such practice, as promised in README
If you didn't like it, Thanks for your suffering! But if you did,
I'm glad you enjoyed it. Have fun coding 💎
*/

int main () {
    int number1 {55};
    int number2 {60};

    bool result = (number1 < number2);
    cout << boolalpha << "result: " << result << endl;

    cout << endl;
    cout << "free standing if statement" << endl;

    //if(result)
    if (result == true){
        cout << number1 << " is less than " << number2 << endl;
    }

    //if(!result)
    if (!(result == true)) {
        cout << number2 << "is NOT less than " << number2 << endl;
    }

    return 0;
}