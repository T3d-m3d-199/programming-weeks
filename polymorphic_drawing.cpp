#include <iostream>
#include <vector>

using namespace std;

// 1. abstract base class
class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() {}
};

// 2. derived classes
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle ◯" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle ▭" << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Triangle △" << endl;
    }
};

// 3. a polymorphic function
void renderCanvas(Shape* s) {
    s->draw();
}

int main() {
    vector<Shape*> canvas;
    canvas.push_back(new Circle());
    canvas.push_back(new Rectangle());
    canvas.push_back(new Triangle());
    canvas.push_back(new Circle());
    cout << "--- Rendering Canvas ---" << endl;
    for (int i = 0; i < canvas.size(); i++) {
        renderCanvas(canvas[i]);
    }
    cout << "\n--- Cleaning Up Memory ---" << endl;
    for (int i = 0; i < canvas.size(); i++) {
        delete canvas[i];
    }

    return 0;
}

//g++ polymorphic_drawing.cpp -o polymorphic_drawing
//./polymorphic_drawing
