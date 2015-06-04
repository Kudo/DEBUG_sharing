#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    for (int num = 0; num < 100; ++num) {
        int randVal = rand() % 10;
        printf("Result: %d", num / randVal);
    }

    return EXIT_SUCCESS;
}
