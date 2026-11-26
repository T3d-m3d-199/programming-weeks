#include <iostream>
#include <fstream>
#include <stdexcept>   // Required for standard exceptions

using namespace std;

bool readFileWithReturnCode(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        return false;
    }

    return true;
}

void readFileWithException(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        throw runtime_error("File not found: " + filename);
    }
}

int main() {
    cout << "--- Testing Return Code Strategy ---" << endl;
    if (readFileWithReturnCode("data.txt") == false) {
        cout << "Return Code: Handled error gracefully. Program continues." << endl;
    }
    cout << "\n--- Testing Exception Strategy ---" << endl;
    try {
        readFileWithException("data.txt");
    }
    catch (const runtime_error& e) {
        cout << "Exception Caught: " << e.what() << endl;
        cout << "Exception Strategy: Forced us to handle the error!" << endl;
    }

    return 0;
}

//g++ return_vs_exception.cpp -o return_vs_exception
//./return_vs_exception
