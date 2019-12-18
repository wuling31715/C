#include <stdio.h>

int recur(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n * n) + recur(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", recur(n));
}