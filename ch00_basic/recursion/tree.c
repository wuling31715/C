# include <stdio.h>
# include <stdlib.h>

void tree(int n)
{
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < n - i; j++)
        {
            printf(" ");
        }        
        for(size_t j = 0; j < i; j++)
        {
            printf("*");
        }
        for(size_t j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }    
    for(size_t i = 0; i < n / 2; i++)
    {
        for(size_t j = 0; j < n; j++)
        {
            if (j == n - 1) {
                printf("**");
            }
            else
            {
                printf(" ");
            }            
        }    
        printf("\n");
    }    
}

int main(void)
{
    int n;
    printf("tree size: ");
    scanf("%d", &n);
    tree(n);
    return 0;
}