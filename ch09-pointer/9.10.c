#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i, j;
    i = 0;
    j = 1;
    swap(&i, &j);
    printf("%d %d\n", i, j);
}