#include <stdio.h>

int main()
{
    int i, j, k;
    i = 0;
    j = 1;
    k = i;
    i = j;
    j = k;
    printf("%d, %d, %d\n", i, j, k);
}