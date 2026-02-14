#include <stdio.h>

int main() {
    // 1. Create an array of 3 integers
    int my_numbers[3] = {10, 20, 30};

    // 2. The array name is actually a pointer to the start
    printf("Array name address:     %p\n", (void*)my_numbers);
    printf("Address of element [0]: %p\n", (void*)&my_numbers[0]);
    printf("Address of element [1]: %p\n", (void*)&my_numbers[1]);
    printf("Address of element [2]: %p\n", (void*)&my_numbers[2]);

    // 3. Pointer Arithmetic (The "Magic")
    // If we add 1 to the pointer, it moves to the NEXT integer slot
    printf("Value at [0]: %d\n", *my_numbers);
    printf("Value at [1]: %d\n", *(my_numbers + 1));
    printf("Value at [2]: %d\n", *(my_numbers + 2));

    return 0;
}