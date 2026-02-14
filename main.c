#include <stdio.h>

struct Process {
    int pid;
    char status;
};

// This function takes a POINTER. It's fast!
void kill_process(struct Process *p) {
    printf("Kernel: Killing process %d...\n", p->pid);
    p->status = 'K'; // 'K' for Killed
}

int main() {
    struct Process my_app = {1024, 'R'};

    printf("App Status: %c\n", my_app.status);

    // We pass the ADDRESS of my_app
    kill_process(&my_app);

    printf("App Status after kernel intervention: %c\n", my_app.status);

    return 0;
}