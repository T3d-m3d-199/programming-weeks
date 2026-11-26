#include <iostream>
#include <fstream>   // REQUIRED for file input/output

using namespace std;

int main() {
    // 1. open file for reading (input)
    ifstream inputFile("numbers.txt");
    if (!inputFile.is_open()) {
        cout << "Error: Could not open numbers.txt for reading!" << endl;

        return 1;   // Exit with error code
    }
    int num;
    int sum = 0;
    cout << "Reading numbers from file..." << endl;

    // 2. read data in a loop
    while (inputFile >> num) {
        cout << "Read: " << num << endl;
        sum += num;
    }

    // 3. close the file
    inputFile.close();
    cout << "Total Sum: " << sum << endl;

    // 4. open file for writing (output)
    ofstream outputFile("sum.txt");
    if (!outputFile.is_open()) {
        cout << "Error: Could not create sum.txt for writing!" << endl;

        return 1;
    }

    // 5. write data to the file
    outputFile << "The total sum is: " << sum << endl;
    outputFile << "Calculated automatically by the C++ program." << endl;

    // 6. close the output file
    outputFile.close();
    cout << "Result successfully saved to sum.txt!" << endl;

    return 0;
}

//g++ file_io_basics.cpp -o file_io_basics
//./file_io_basics
