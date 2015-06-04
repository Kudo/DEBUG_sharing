#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int adder(int a, int b)
{
    return a + b;
}

int calc(int a, int b, int (*strategy)(int, int))
{
    return (*strategy)(a, b);
}

int main(int argc, char *argv[])
{
    int result = calc(3, 6, &adder);
    printf("Result: %d\n", result);
    return EXIT_SUCCESS;
}
