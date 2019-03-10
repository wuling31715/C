# include<stdio.h>
# include<stdlib.h>
# include"square.h"

int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("square(%d) = %d", n, square(n));
    return 0;
}
