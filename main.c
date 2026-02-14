#include <stdio.h>
#include <string.h> // The string toolbox

int main() {
    char source[] = "Kernel";
    char destination[20]; // We must set a size manually!

    // 1. Copying strings (Safe version: strncpy)
    // We tell it to copy 'source' into 'dest', but ONLY up to 20 bytes.
    strncpy(destination, source, sizeof(destination));

    // 2. Comparing strings
    // strcmp returns 0 if they are exactly the same
    if (strcmp(source, destination) == 0) {
        printf("The strings match: %s\n", destination);
    }

    // 3. Finding the length (Doesn't count the \0)
    printf("Length of string: %zu\n", strlen(destination));

    printf("Source: %s, Destination: %s\n", source, destination);

    return 0;
}