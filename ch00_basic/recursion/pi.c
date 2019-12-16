# include <stdio.h>
# include <stdlib.h>

double power(double base, int exponent)
{
    double output = 1.0;
    for(size_t i = 0; i < exponent; i++)
    {        
        output *= base;
    }
    return output;
}

double pi(int n)
{
    int k;
    double sum = 0;
    for(size_t k = 1; k <= n; k++)
    {
        sum += power(-1.0, k - 1) / (2 * k - 1);        
    }
    return 4 * sum;
}

int main(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    for(size_t i = 1; i < n; i++)
    {
        printf("pi = %f\n", pi(i));
    }
    return 0;
}