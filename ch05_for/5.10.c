#include <stdio.h>

int main()
{
    int i, j, k;
    j = 0;
    scanf("%d", &k);
    for (i = 2; (i * i) <= k; i++)
    {
        if (k % i == 0)
            {
                j = 1;
                break;
            }
    }    
    printf("%d\n", j);
}