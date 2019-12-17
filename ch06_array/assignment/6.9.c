#include <stdio.h>

int main()
{
    int array[3][3];
    int i, j, row, column;
    j = 0;
    // int play1_array[5];
    // int play2_array[5];
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &row);
        scanf("%d", &column);
        if (i % 2 == 0)
        {
            array[row][column] = 2;
        }
        else
        {
            array[row][column] = 1;
        }
        for (i = 0; i < 3; i++)
        {
            if ((array[i][j] == array[i][j+1]) && 
                (array[i][j+1] == array[i][j+2]) && 
                ((array[i][j+2] == 1) || (array[i][j+2] == 2)))
            {
                printf("%d\n", 1);
                return 0;
            }
            if ((array[0][0] == array[1][1]) &&
                (array[1][1] == array[2][2]) &&
                ((array[2][2] == 1) || (array[2][2] == 2)))
            {
                printf("%d\n", 1);
                return 0;
            }
            if ((array[0][2] == array[1][1]) &&
                (array[1][1] == array[2][0]) &&
                ((array[2][0] == 1) || (array[2][0] == 2)))
            {
                printf("%d\n", 1);
                return 0;
            }
        }
    }
    printf("%d\n", 0);
}