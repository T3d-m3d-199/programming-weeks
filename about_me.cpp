#include <iostream>

using namespace std;

int main() {
    // Variable declarations
    string name;
    string course;
    string hobby;
    string reason;
    string expectation;
    string definition;

    // Welcome message
    cout << "========================================" << endl;
    cout << " WELCOME TO YOUR FIRST PROGRAM!" << endl;
    cout << "========================================" << endl;
    cout << endl;

    // Question 1: name
    cout << "1. What is your name? ";
    getline(cin, name);

    // Question 2: course
    cout << "2. What course are you doing? (BBIT/BCS): ";
    getline(cin, course);

    // Question 3: hobby
    cout << "3. What is your hobby? ";
    getline(cin, hobby);

    // Question 4: reason
    cout << "4. Why did you choose this course? ";
    getline(cin, reason);

    // Question 5: expectation
    cout << "5. What do you expect to learn in programming? ";
    getline(cin, expectation);

    // Question 6: definition
    cout << "6. In your own words, what is programming? ";
    getline(cin, definition);

    // Display summary
    cout << endl;
    cout << "========================================" << endl;
    cout << " YOUR PROFILE SUMMARY" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Course: " << course << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Reason: " << reason << endl;
    cout << "Expectation: " << expectation << endl;
    cout << "Programming is: " << definition << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << " Thank you for completing this!" << endl;
    cout << "========================================" << endl;

    return 0;
}

//g++ about_me.cpp -o about_me
//./about_me
