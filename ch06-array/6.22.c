#include <stdio.h>

int main()
{
    int array[2][3][4];
    int i, j, k;
    printf("%ld\n", sizeof(array[0][0][0])); // 4byte
    printf("%ld\n", sizeof(array[0][0])); // 4 * 4 = 16byte
    printf("%ld\n", sizeof(array[0])); // 16 * 3 = 48byte
    printf("%ld\n", sizeof(array)); // 48 * 2 = 96byte
    for (i = 0; i < 2;i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                printf("%p\n", &array[i][j][k]);
            }
        }
    }
}