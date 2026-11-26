#include <stdio.h>
#include <string.h>

struct Shape {
    char color[20];
};

struct Circle {
    struct Shape base;
    double radius;
};

int main() {
    // 1. Create a Circle
    struct Circle myCircle;

    // 2. Initialize the "inherited" data
    strcpy(myCircle.base.color, "Red");

    // 3. Initialize the Circle's unique data
    myCircle.radius = 5.0;

    // 4. Display the information
    printf("Circle Color (Inherited): %s\n", myCircle.base.color);
    printf("Circle Radius (Specific): %.2f\n", myCircle.radius);

    return 0;
}

//gcc inheritance.c -o inheritance
//./inheritance
