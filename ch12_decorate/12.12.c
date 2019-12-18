#include <stdio.h>

void test1()
{
    int i;
    i++;
    printf("%d ", i);
}

void test2()
{
    int i = 0;
    i++;
    printf("%d ", i);
}

void test3()
{
    static int i = 0;
    i++;
    printf("%d ", i);
}

int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        test1();
        test2();
        test3();
        printf("\n");
    }
}