#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, k;
    printf("%ld\n", sizeof(i));
    j = pow(2, 31);
    j--;
    printf("%d\n", j);
    j++;
    printf("%d\n", j); // overflow
}