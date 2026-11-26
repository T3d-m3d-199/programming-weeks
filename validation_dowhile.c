#include <stdio.h>

int main() {
    int number = 0;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
        if (number <= 0) {
            printf("Invalid! ");
        }
    } while (number <= 0);   // Condition checked AFTER the body runs
    printf("You entered: %d\n", number);

    return 0;
}

//gcc validation_dowhile.c -o validation_dowhile
//./validation_dowhile
