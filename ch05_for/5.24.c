#include <stdio.h>

int main()
{
    int i, j, k, n;
    n = 11;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            k = i * j;
            printf("%d * %d = %d\n", i, j, k);
        }
    }
}