#include <stdio.h>

int main()
{
    int i, i4, i3, i2, i1;
    scanf("%d", &i);
    i4 = i / 1000;
    i3 = i / 100;
    i3 = i3 % 10;
    i2 = i / 10;
    i2 = i2 % 10;
    i1 = i % 10;
    printf("%d, %d, %d, %d\n", i4, i3, i2, i1);
}