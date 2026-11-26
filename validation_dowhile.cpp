#include <iostream>

using namespace std;

int main() {
    int number = 0;
    do {
        cout << "Enter a positive number: ";
        cin >> number;
        if (number <= 0) {
            cout << "Invalid! ";
        }
    } while (number <= 0);   // Condition checked AFTER the body runs
    cout << "You entered: " << number << endl;

    return 0;
}

//g++ validation_dowhile.cpp -o validation_dowhile
//./validation_dowhile
