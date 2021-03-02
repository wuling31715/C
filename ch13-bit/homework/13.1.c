#include <stdio.h>

int * mask(int a[], int b[])
{
    int static binary_array[8];
    int i;
    for (i = 0; i < 7; i++)
    {
        binary_array[i] = a[i] & b[i];
    }
    return binary_array;
}

int * to_binary(int n)
{
    int static binary_array[8];
    int i, binary;
    i = 7;
    while (n > 0)
    {
        binary = n % 2;
        binary_array[i] = binary;
        n = n / 2;
        i--;
    }
    return binary_array;
}

int main()
{
    int n, m, i;
    scanf("%d", &n);
    scanf("%d", &m);
    int * binary_array = to_binary(n);
    int * binary_array2 = to_binary(m);
    int * binary_array3 = mask(binary_array, binary_array2);
    for (i = 0; i < 8; i++)
    {
        printf("%d ", binary_array[i]);
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", binary_array2[i]);
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", binary_array3[i]);
    }
    printf("\n");
}