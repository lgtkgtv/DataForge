#include <stdio.h>
#include <stdlib.h>
#include "dataforge.h" // Assuming we create a useable header from dataforge.c

int main() {
    // Simple test case
    printf("Running dataforge tests...\n");

    // Create a test file
    FILE *testFile = fopen("test.txt", "w");
    fprintf(testFile, "Line 1\nLine 2\nLine 3\n");
    fclose(testFile);

    // Execute dataforge and capture output (you'd normally use a testing framework)
    char command[256];
    sprintf(command, "./dataforge test.txt");
    system(command); // This is a very rough test example.

    printf("DataForge tests completed.\n");
    return 0;
}