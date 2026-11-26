#include <iostream>

using namespace std;

class DynamicArray {
private:
    int* data;
    int size;
    int capacity;
public:
    DynamicArray(int initialCapacity) {
        capacity = initialCapacity;
        size = 0;
        data = new int[capacity];
    }
    ~DynamicArray() {
        delete[] data;
    }
    void push_back(int value) {
        // 1. Check if we have run out of space
        if (size == capacity) {
            int newCapacity = capacity * 2;
            int* newData = new int[newCapacity];
            for (int i = 0; i < size; i++) {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
            capacity = newCapacity;
            cout << "[Resized capacity from " << capacity/2 << " to " << capacity << "]" << endl;
        }

        // 2. Add the new value at the next available slot
        data[size] = value;
        size++;   // Increment the size counter
    }
    void display() {
        cout << "Array (Size: " << size << ", Capacity: " << capacity << "): ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray myArray(2);
    cout << "Created dynamic array with capacity 2." << endl;
    myArray.push_back(10);
    myArray.push_back(20);
    myArray.display();
    cout << "\nAdding third element..." << endl;
    myArray.push_back(30);
    myArray.display();
    cout << "\nAdding fourth and fifth elements..." << endl;
    myArray.push_back(40);
    myArray.push_back(50);   // This will trigger another resize
    myArray.display();

    return 0;
}

//g++ dynamic_array.cpp -o dynamic_array
//./dynamic_array
