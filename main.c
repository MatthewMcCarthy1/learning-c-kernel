#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

struct Process {
    int pid;
    char status;
};

int main() {
    // 1. Ask the OS for exactly enough memory to hold one Process struct
    // malloc stands for "memory allocation"
    struct Process *ptr = malloc(sizeof(struct Process));

    // 2. Check if the OS actually gave us the memory
    if (ptr == NULL) {
        printf("Kernel Error: Out of memory!\n");
        return 1;
    }

    // 3. Use the memory
    ptr->pid = 2048;
    ptr->status = 'R';
    printf("Dynamic Process created at address %p with PID %d\n", (void*)ptr, ptr->pid);

    // 4. CRITICAL: Give the memory back to the OS
    free(ptr);
    ptr = NULL; // Good practice: point to NULL so we don't accidentally use it again

    printf("Memory freed successfully.\n");

    return 0;
}