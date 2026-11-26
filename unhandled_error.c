#include <stdio.h>

int main() {
    FILE *myFile = fopen("missing_file.txt", "r");

    // We are skipping the null check!
    char data[100];
    printf("Attempting to read from missing file...\n");

    // Dereferencing a null pointer!
    fscanf(myFile, "%s", data);
    printf("Data read: %s\n", data);
    fclose(myFile);

    return 0;
}

//gcc unhandled_error.c -o unhandled_error
//./unhandled_error
