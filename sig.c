#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int PID = atoi(argv[1]);
    kill(PID, SIGUSR1);
}