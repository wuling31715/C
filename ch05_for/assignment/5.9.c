#include <stdio.h>

int is_prime()
{
    int i, j, k;
    j = 1;
    scanf("%d", &k);
    for (i = 2; (i * i) <= k; i++)
    {
        if (k % i == 0)
            {
                j = 0;
                break;
            }
    }
    printf("%d\n", j);
}

int main()
{

}