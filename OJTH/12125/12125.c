#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, q;
    scanf("%d %d\n", &n, &q);
    int array[n];
    char str[n * 20];
    fgets(str, sizeof(str), stdin);
    
    char *delim = " (/`A`)/ ~I__I ";
    char *token;
    token = strtok(str, delim);
    int i = 0;
    while (token != NULL) {
        array[i] = atoi(token);
        token = strtok(NULL, delim);
        i++;
    }

    int prefix_sum[n];
    prefix_sum[0] = array[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = array[i] + prefix_sum[i - 1];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r, sum;
        scanf("%d %d\n", &l, &r);
        if (l == 1)
        {
            sum = prefix_sum[r - 1];
        } else {
            sum = prefix_sum[r - 1] - prefix_sum[l - 2];
        }
        printf("%d\n", sum);    
    }
    return 0;
}