#include <stdio.h>

int main()
{
    int i, j, k;
    i = 0;
    j = 1;
    k = (i == j);
    printf("%d\n", k); // true
    k = (i != j);
    printf("%d\n", k); // false
}