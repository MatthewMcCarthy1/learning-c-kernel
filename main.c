#include <stdio.h>

int main() {

    char name[] = "Linux";

    printf("Word: %s\n", name);

    printf("Size of 'Linux' array: %zu bytes\n", sizeof(name));

    for (int i = 0; i < 6; i++) {
        printf("Character at index %d: '%c' (Hex: 0x%02x)\n", i, name[i], name[i]);
    }

    return 0;
}