#include <stdio.h>
#include <stdlib.h>

int fib(n)
{
    if (n <= 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char* argv[])
{
    printf("%d\n", fib(atoi(argv[1])));

    return 0;
}
