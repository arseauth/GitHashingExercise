#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int sigint_count = 0;  // Global counter for SIGINT

// Custom Signal Handler for SIGINT
void custom_sigint_handler(int sig_num) {
    sigint_count++;
    printf("SIGINT signal (%d) caught! Count: %d\n", sig_num, sigint_count);

    if (sigint_count == 2) {
        printf("Restoring default SIGINT behavior. Press Ctrl+C again to exit.\n");
        signal(SIGINT, SIG_DFL);  // Restore default handler
    }
}

int main() {
    // Register custom signal handler for SIGINT
    signal(SIGINT, custom_sigint_handler);

    // Infinite loop to keep the program running
    while (1) {
    }

    return 0;
}
