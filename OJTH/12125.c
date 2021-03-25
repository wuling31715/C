#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    printf("%d %d\n", n, q);
    int array[n];
    char str[] = "5(/`A`)/ ~I__I 1(/`A`)/ ~I__I 6(/`A`)/ ~I__I 7(/`A`)/ ~I__I 0(/`A`)/ ~I__I 9(/`A`)/ ~I__I";
    char *delim = "(/`A`)/ ~I__I";
    char *pch;
    pch = strtok(str, delim);
    int i = 0;
    while (pch != NULL) {
        array[i] = atoi(pch);
        pch = strtok(NULL, delim);
        i++;
    }
    // int size_of_array = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    int prefix_sum[n];
    prefix_sum[0] = array[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = array[i] + prefix_sum[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", prefix_sum[i]);
    }

    for (int i = 0; i < q; i++)
    {
        int l, r, sum;
        scanf("%d %d", &l, &r);
        if (l == 1)
        {
            sum = prefix_sum[r - 1];
        } else {
            sum = prefix_sum[r - 1] + prefix_sum[l - 2];
        }
        printf("%d\n", sum);    
    }
    
    
    
    

     
    return 0;
}