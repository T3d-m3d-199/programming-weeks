#include <stdio.h>
#include <errno.h>   // Required for errno
#include <string.h>   // Required for strerror

int readFileWithReturnCode(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        // Evaluation:
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));

        return 1;
    }
    fclose(file);

    return 0;   // Return 0 for success
}

int main() {
    printf("--- Testing Return Code Strategy ---\n");
    if (readFileWithReturnCode("data.txt") == 1) {
        printf("Main function: Handled error gracefully. Program continues.\n");
    }
    printf("\n--- Evaluation ---\n");
    printf("In C, we must manually check return codes.\n");
    printf("If the programmer forgets to check, the program might crash later.\n");

    return 0;
}

//gcc return_codes.c -o return_codes
//./return_codes
