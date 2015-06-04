#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int main(int argc, char *argv[])
{
    for (int num = 0; num < 100; ++num) {
        int randVal = rand() % 10;
        if (randVal == 0) {
            puts("set breakpoint here.");
            // raise(SIGINT);
        }
        printf("Result: %d\n", num / randVal);
    }

    return EXIT_SUCCESS;
}
