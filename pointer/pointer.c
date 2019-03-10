# include<stdio.h>
# include<stdlib.h>

void add(int x, int y, int *z)
{
    // address of z = address of sum
    *z = x + y;    
}

int main(void)
{
    int sum, x, y;
    printf("x, y = ");
    scanf("%d, %d", &x, &y);
    add(x, y, &sum);
    printf("sum = %d\n", sum);
    return 0;
}