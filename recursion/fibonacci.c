#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n)
{
    if (n == 1 || n == 2) {
        return 1;        
    } else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("fibonacci(%d) = %d", n, fibonacci(n));
    return 0;
}
