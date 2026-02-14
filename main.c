#include <stdio.h>

// A 'struct' is a custom data type. 
// It groups different variables into one block of memory.
struct Process {
    int pid;          // Process ID
    char status;      // 'R' for Running, 'S' for Sleeping
    float cpu_usage;
};

int main() {
    // Initialize our struct
    struct Process my_app = {1001, 'R', 0.5f};

    printf("Process Info:\n");
    printf("ID: %d\n", my_app.pid);
    printf("Status: %c\n", my_app.status);

    // Now, the Kernel way: using a pointer to a struct
    struct Process *ptr = &my_app;

    // To access members via a pointer, we use the 'arrow' operator ->
    printf("ID via pointer: %d\n", ptr->pid);

    return 0;
}