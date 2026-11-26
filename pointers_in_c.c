#include <stdio.h>

int main() {
    // 1. A normal integer variable
    int originalValue = 100;

    // 2. In C++, we would use a reference: int& refValue = originalValue;
    int *ptr1 = &originalValue;
    int *ptr2 = &originalValue;
    printf("--- Initial State ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("Value via ptr1: %d\n", *ptr1);   // * dereferences to get the value

    // --- modification 1 ---
    *ptr1 = 200;
    printf("\n--- After setting *ptr1 = 200 ---\n");
    printf("originalValue: %d\n", originalValue);   // Expected: 200
    printf("Value via ptr2: %d\n", *ptr2);   // Expected: 200

    // --- modification 2 ---
    *ptr2 = 300;
    printf("\n--- After setting *ptr2 = 300 ---\n");
    printf("originalValue: %d\n", originalValue);   // Expected: 300
    printf("Value via ptr1: %d\n", *ptr1);   // Expected: 300

    // --- modification 3 ---
    int anotherValue = 500;
    ptr1 = &anotherValue;
    printf("\n--- After pointing ptr1 to anotherValue ---\n");
    printf("originalValue: %d\n", originalValue);   // Expected: 300 (Unchanged)
    printf("Value via ptr1: %d\n", *ptr1);   // Expected: 500

    return 0;
}

//gcc pointers_in_c.c -o pointers_in_c
//./pointers_in_c
