#include <stdio.h>

int get_fractional(int n)
{
    int fractional = 1;
    for (int i = 1; i <= n; i++)
    {
        fractional *= i;
    }
    return fractional;
}

int get_combination(int n, int k)
{
    int up, down;
    up = get_fractional(n);
    down = get_fractional(n - k) * get_fractional(k);
    return up / down;
}

int get_sum(int m, int n)
{
    int sum, combination = 0;
    for (int k = 0; k <= m; k++)
    {
        combination = get_combination(n, k);
        sum += combination;
    }
    return sum;
}

int main()
{
    int m, n, sum;
    scanf("%d%d", &m, &n); 
    sum = get_sum(n, m);
    printf("%d\n", sum);
}