#include <stdio.h>

int main() {
    int my_data = 42;
    
    // 1. Create a pointer. 
    // Think of this as a 'Remote Control' for the variable 'my_data'.
    int *ptr = &my_data; 

    printf("Before: %d\n", my_data);
    printf("Pointer is looking at address: %p\n", (void*)ptr);

    // 2. De-referencing (The '*' here means "Go to the address and act")
    *ptr = 100; 

    printf("After:  %d (Changed without touching the 'my_data' variable!)\n", my_data);
    
    return 0;
}