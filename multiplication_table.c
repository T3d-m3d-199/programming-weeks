#include <stdio.h>

int main() {
    printf("========================================\n");
    printf(" MULTIPLICATION TABLE (1 to 10)\n");
    printf("========================================\n\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%5d", i * j);
        }
        printf("\n");
    }   // End of outer loop - all rows are printed
    printf("========================================\n");

    return 0;
}

//gcc multiplication_table.c -o multiplication_table
//./multiplication_table
