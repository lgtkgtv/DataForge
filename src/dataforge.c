#include <stdio.h>
#include "utils.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: dataforge <filename>\n");
        return 1;
    }

    const char *filename = argv[1];
    printf("Processing file: %s\n", filename);

    // Example usage of a utility function
    int lineCount = countLines(filename);
    printf("Number of lines: %d\n", lineCount);

    // Add actual data processing logic here...
    // ...

    return 0;
}
 
/***
   The  dataforge  program reads a file name from the command line and processes the file. The  countLines  function is defined in the  utils.h  header file. The  countLines  function is implemented in the  utils.c  source file. 
    The  countLines  function is a simple utility function that counts the number of lines in a file. 
    The function opens the file in read mode and counts the number of newline characters. 
    The  countLines  function is a simple example of a utility function that can be used in multiple programs. The function is defined in a header file and implemented in a source file. 
    The function can be reused in other programs by including the header file and linking the object file. 
*/
   