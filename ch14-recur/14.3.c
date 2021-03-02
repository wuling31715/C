#include <stdio.h>

int gcd(int i, int j)
{
    int k = i % j;
    if (k == 0)
    {
        return j;
    }
    return (gcd(j, k));
}

int main()
{
    int i, j;
    scanf("%d%d", &i, &j);
    printf("gcd(%d, %d) = %d\n", i, j, gcd(i, j));
}