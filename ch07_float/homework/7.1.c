#include <stdio.h>
#include <math.h>

int get_factorial(int n)
{
    int i, factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

double get_sin(double x)
{
    int i, n;
    double sum, up, down, temp;
    n = 15;
    for (int i = 0; i <= n; i++)
    {        
        up = pow(-1, i);
        down = get_factorial(2 * i + 1);
        temp = pow(x, (2 * i + 1));        
        sum += ((up / down) * temp);
    }
    return sum;
}

int main()
{
    double x, y;
    scanf("%lf", &x);
    y = get_sin(x);
    printf("%lf\n", y);
}