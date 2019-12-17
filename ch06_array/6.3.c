#include <stdio.h>

int main()
{
    int array[10];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &(array[i]));
    }
    for (i = 4; i >= 0 ; i--)
    {
        printf("%d\n", array[i]);
    }
}