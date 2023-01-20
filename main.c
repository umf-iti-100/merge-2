#include <stdio.h>

int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return 42;
}

int main()
{
    printf("Hello world!\n");
    printf("%d\n", fibo(5));

    return 0;
}
