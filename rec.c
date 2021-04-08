#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>


void sig_handler(int signnum) {
    printf("received signal\n");
}

int main() {
    int PID = getpid();
    printf("%d\n", PID);

    if (signal(SIGUSR1, sig_handler) == SIG_ERR) {
        perror("signal error\n");
        exit(1)
    }

    while(1) {
        printf("z\n");
        sleep(1);
    }
}
