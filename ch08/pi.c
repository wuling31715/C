# include <stdio.h>
# include <stdlib.h>

int power(int base, int exponent)
{
    int output = 1;
    for(size_t i = 0; i < exponent; i++)
    {        
        output *= base;
    }
    return output;
}

int main(void)
{
    int base, exponent;
    scanf("%d %d", &base, &exponent);
    printf("%d", power(base, exponent));
    return 0;
}
