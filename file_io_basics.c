#include <stdio.h>
#include <stdlib.h>   // REQUIRED for exit()

int main() {
    // 1. declare a file pointer
    FILE *inputFile;
    FILE *outputFile;

    // 2. OPEN FILE FOR READING ("r" mode)
    inputFile = fopen("numbers.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open numbers.txt for reading!\n");

        return 1;   // Exit with error code
    }
    int num;
    int sum = 0;
    printf("Reading numbers from file...\n");

    // 3. read data in a loop
    while (fscanf(inputFile, "%d", &num) != EOF) {
        printf("Read: %d\n", num);
        sum += num;
    }

    // 4. close the file
    fclose(inputFile);
    printf("Total Sum: %d\n", sum);

    // 5. OPEN FILE FOR WRITING ("w" mode)
    outputFile = fopen("sum.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not create sum.txt for writing!\n");

        return 1;
    }

    // 6. write data to the file
    fprintf(outputFile, "The total sum is: %d\n", sum);
    fprintf(outputFile, "Calculated automatically by the C program.\n");

    // 7. close the output file
    fclose(outputFile);
    printf("Result successfully saved to sum.txt!\n");

    return 0;
}

//gcc file_io_basics.c -o file_io_basics
//./file_io_basics
