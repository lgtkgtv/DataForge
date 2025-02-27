// src/utils.c
#include "utils.h"
#include <stdio.h>
#include <sys/stat.h>

int countLines(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return -1; // Error opening file
    }

    int count = 0;
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }

    fclose(file);
    return count;
}

long getFileSize(const char *filename) {
    struct stat st;
    if (stat(filename, &st) == 0) {
        return st.st_size;
    }
    return -1; // Error getting file size
}
