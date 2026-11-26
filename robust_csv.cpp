#include <iostream>
#include <fstream>
#include <sstream>   // Required for stringstream (parsing CSV)
#include <string>
#include <stdexcept>

using namespace std;

int main() {
    ifstream file("students.csv");

    // 1. handle missing file gracefully
    if (!file.is_open()) {
        cout << "Error: Could not find students.csv!" << endl;

        return 1;
    }
    string line;
    cout << "--- Processing Student Records ---" << endl;

    // 2. read the file line by line
    while (getline(file, line)) {
        if (line.empty()) continue;
        stringstream ss(line);
        string name;
        string scoreStr1, scoreStr2, scoreStr3;
        getline(ss, name, ',');
        getline(ss, scoreStr1, ',');
        getline(ss, scoreStr2, ',');
        getline(ss, scoreStr3, ',');

        // 3. exception handling for malformed data
        try {
            int s1 = stoi(scoreStr1);
            int s2 = stoi(scoreStr2);
            int s3 = stoi(scoreStr3);
            double average = (s1 + s2 + s3) / 3.0;
            cout << name << " -> Average: " << average << endl;
        } catch (const invalid_argument& e) {
            cout << "WARNING: Skipping malformed record for " << name
                << " (Invalid score data)." << endl;
        }
    }
    file.close();
    cout << "\n--- Processing Complete ---" << endl;

    return 0;
}

//g++ robust_csv.cpp -o robust_csv
//./robust_csv
