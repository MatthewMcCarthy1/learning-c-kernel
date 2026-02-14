#include <stdio.h>

int main() {
    printf("--- C Type Sizes on My Machine ---\n");
    printf("char:      %zu byte(s)\n", sizeof(char));
    printf("int:       %zu byte(s)\n", sizeof(int));
    printf("long:      %zu byte(s)\n", sizeof(long));
    printf("float:     %zu byte(s)\n", sizeof(float));
    printf("double:    %zu byte(s)\n", sizeof(double));
    printf("pointer:   %zu byte(s)\n", sizeof(void*));

    int my_data = 42;
    
    // The '&' symbol means "Address of"
    printf("The value is: %d\n", my_data);
    printf("The memory address (location in RAM) is: %p\n", (void*)&my_data);
    
    return 0;
}