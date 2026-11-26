#include <iostream>
#include <string>

using namespace std;

class Shape {
protected:
    string color;
public:
    Shape(string c) {
        color = c;
        cout << "Shape constructor called." << endl;
    }
    void displayColor() {
        cout << "This shape's color is: " << color << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(string c, double r) : Shape(c) {
        radius = r;
        cout << "Circle constructor called." << endl;
    }
    void displayCircleInfo() {
        cout << "This circle is " << color << " and has a radius of " << radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(string c, double w, double h) : Shape(c) {
        width = w;
        height = h;
        cout << "Rectangle constructor called." << endl;
    }
    void displayRectangleInfo() {
        cout << "This rectangle is " << color << " and is " << width << "x" << height << endl;
    }
};

int main() {
    cout << "--- Creating a Circle ---" << endl;
    Circle myCircle("Red", 5.0);
    myCircle.displayColor();   // Inherited method from Shape
    myCircle.displayCircleInfo();   // Unique method from Circle
    cout << "\n--- Creating a Rectangle ---" << endl;
    Rectangle myRect("Blue", 4.0, 6.0);
    myRect.displayColor();   // Inherited method from Shape
    myRect.displayRectangleInfo();   // Unique method from Rectangle

    return 0;
}

//g++ inheritance.cpp -o inheritance
//./inheritance
