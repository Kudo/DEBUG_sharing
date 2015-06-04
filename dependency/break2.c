#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int realRemoteAdder(int a, int b)
{
    // Assume to get data from remote server
    sleep(10);
    return a + b;
}

int mockAdder(int a, int b)
{
    return a + b;
}

int calc(int a, int b, int (*strategy)(int, int))
{
    return (*strategy)(a, b);
}

int main(int argc, char *argv[])
{
    int result = calc(3, 6, &mockAdder);
    printf("Result: %d\n", result);
    return EXIT_SUCCESS;
}
