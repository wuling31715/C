#include <stdio.h>

double get_pow(double x, double y)
{
    double z;
    int i;
    z = x;
    for (i = 1; i < y; i++)
    {
        x = x * z;
    }
    return x;
}

int main(void)
{
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);
    x = get_pow(x, y);
    printf("%lf\n", x);
}