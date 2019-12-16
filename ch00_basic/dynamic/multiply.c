#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int x, y;
    printf("x, y = ");
    scanf("%d, %d", &x, &y);
    int array[x][y];

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            array[i][j] = (i + 1) * (j + 1);
            printf("%4d ", array[i][j]);            
        }                
        printf("\n");
    }
    return 0;
}
