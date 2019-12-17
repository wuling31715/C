#include <stdio.h>

int main()
{
    int i, i50, i10, i5, i1, j;
    scanf("%d", &i);
    i50 = i / 50;
    i = i - (i50 * 50);
    i10 = i / 10;
    i = i - (i10 * 10);
    i5 = i / 5;
    i = i - (i5 * 5);
    i1 = i / 1;
    i = i - (i1 * 1);
    printf("%d, %d, %d, %d, %d\n", i, i50, i10, i5, i1);
    j = (i50 * 50) + (i10 * 10) + (i5 * 5) + (i1 * 1);
    printf("%d\n", j);
}