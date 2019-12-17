#include <stdio.h>

int is_prime(n)
{
    int i, flag;
    flag = 0;
    for (i = 2; (i * i) <= n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        return n;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int prime_array[100];
    int n, m, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        m = is_prime(i);
        prime_array[i] = m;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", prime_array[i]);
    }
}