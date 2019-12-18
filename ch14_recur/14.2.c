#include <stdio.h>

int fib(int i)
{
    if (i == 0 || i == 1)
    {
        return i;
    }
    else
    {
        return (fib(i - 1) + fib(i - 2));
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("fib(%d) = %d\n", n, fib(n));
}