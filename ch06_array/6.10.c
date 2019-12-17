#include <stdio.h>

int main()
{
    int array[10];
    int i;
    printf("%ld\n", sizeof(array));
    printf("%p\n", &(array));
    printf("%ld\n", sizeof(array[0]));
    for (i = 0 ; i < 10; i++)
    {
        printf("%p\n", &(array[i]));
    }
}