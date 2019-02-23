#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    long array[n];

    for(size_t i = 0; i < n; i++)
    {
        if (i == 0 || i == 1) {
            array[i] = 1;
        }
        else
        {
            array[i] = array[i - 1] + array[i - 2];
        }
        printf("fibonacci(%d) = %ld\n", (int) i, array[i]);
    }
}
