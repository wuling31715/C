#include<stdio.h>
#include<stdlib.h>

enum color
{
    red,
    green,
    blue,
};

int main(void)
{
    enum color car = red;
    if (car == red) 
    {
        printf("red\n");
    } else if (car == green)
    {
        printf("green\n");
    } else
    {
        printf("blue\n");
    }
    return 0;
}
