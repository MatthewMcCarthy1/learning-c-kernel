#include <stdio.h>

int main() {
    // 1. We create a pointer and point it to 'NULL' (Address 0).
    // In modern OSs, Address 0 is strictly off-limits.
    int *ptr = NULL;

    printf("Attempting to write to a NULL pointer...\n");

    // 2. This is the "Illegal" move. 
    // We are telling the CPU: "Go to address 0 and put the number 99 there."
    *ptr = 99; 

    // 3. This line will NEVER run.
    printf("I successfully wrote to memory!\n");

    return 0;
}