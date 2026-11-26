#include <stdio.h>
#include <string.h>

// 1. Define a Function Pointer Type
typedef void (*SpeakFunction)();
struct Animal {
    SpeakFunction speak;
};

struct Dog {
    struct Animal base;   // Embed the base
};

void genericSound() {
    printf("Animal makes a generic sound.\n");
}

void dogBark() {
    printf("Dog barks: Woof! Woof!\n");
}

int main() {
    printf("--- Simulating Non-Virtual (Base only) ---\n");
    struct Animal myAnimal;
    myAnimal.speak = genericSound;
    myAnimal.speak();   // Calls genericSound()
    printf("\n--- Simulating Virtual (Dynamic binding) ---\n");
    struct Dog myDog;
    myDog.base.speak = dogBark;
    struct Animal* pet = (struct Animal*)&myDog;
    pet->speak();   // <--- analyze this line

    return 0;
}

//gcc virtual_functions.c -o virtual_functions
//./virtual_functions
