#include <iostream>

using namespace std;

int main() {
    // 1. A normal integer variable
    int originalValue = 100;

    // 2. A REFERENCE variable.
    int& refValue = originalValue;

    // 3. A POINTER variable.
    int* ptrValue = &originalValue;
    cout << "--- Initial State ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "refValue: " << refValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;   // * dereferences to get the value

    // --- modification 1 ---
    refValue = 200;
    cout << "\n--- After setting refValue = 200 ---" << endl;
    cout << "originalValue: " << originalValue << endl;   // Expected: 200
    cout << "ptrValue points to: " << *ptrValue << endl;   // Expected: 200

    // --- modification 2 ---
    *ptrValue = 300;
    cout << "\n--- After setting *ptrValue = 300 ---" << endl;
    cout << "originalValue: " << originalValue << endl;   // Expected: 300
    cout << "refValue: " << refValue << endl;   // Expected: 300

    // --- modification 3 ---
    int anotherValue = 500;
    ptrValue = &anotherValue;
    cout << "\n--- After pointing ptrValue to anotherValue ---" << endl;
    cout << "originalValue: " << originalValue << endl;   // Expected: 300
    cout << "ptrValue points to: " << *ptrValue << endl;   // Expected: 500

    // refValue = anotherValue; would just copy the value 500 into originalValue.

    return 0;
}

//g++ pointers_vs_references.cpp -o pointers_vs_references
//./pointers_vs_references
