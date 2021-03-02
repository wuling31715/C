#include <stdio.h>

int main()
{
    float f;
    double df;
    scanf("%f", &f);
    scanf("%lf", &df);
    printf("%f\n", f);
    printf("%lf\n", df);
    printf("%lu\n", sizeof(f));
    printf("%lu\n", sizeof(df));
    df = df + f;
    printf("%lf\n", df);
    f = df + f;
    printf("%lu\n", sizeof(f));
}