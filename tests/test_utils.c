#include <stdio.h>
#include "utils.h"

int main() {
    printf("Running utils tests...\n");

    // Create a test file
    FILE *testFile = fopen("test.txt", "w");
    fprintf(testFile, "Line 1\nLine 2\nLine 3\n");
    fclose(testFile);

    // Test countLines
    int lineCount = countLines("test.txt");
    if (lineCount == 3) {
        printf("countLines test passed.\n");
    } else {
        printf("countLines test failed. Expected 3, got %d.\n", lineCount);
    }

    printf("Utils tests completed.\n");
    return 0;
}