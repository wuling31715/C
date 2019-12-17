#include <stdio.h>

int get_factor(k)
{
    int i, j;
    j = 1;
    for (i = 2; (i * i) <= k; i++)
    {
        if (k % i == 0)
            {
                return i; // 因數
                j = 0; // 和數
                break; 
            }
    }
    return 0; // 質數
}

int main()
{
    int n, factor, i;
    int factor_array[10];
    i = 0;
    scanf("%d", &n);
    factor = get_factor(n);
    while (factor != 0)
    {
        factor = get_factor(n);
        factor_array[i] = factor;
        i++;
        n = n / factor;
        factor = get_factor(n);
    }
    factor_array[i] = n;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", factor_array[i]);
    }
}