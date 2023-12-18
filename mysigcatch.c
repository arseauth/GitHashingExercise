#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

// Signal Handler for SIGINT
void sigint_handler(int sig_num) {
    // Print message
    printf("SIGINT signal caught!\n");
    // termination
    exit(0);
}

int main() {
    // Register signal handler for SIGINT
    signal(SIGINT, sigint_handler);

    // Infinite loop to keep the program running
    while (1) {
    }

    return 0;
}
