#include<stdio.h>
#include<stdlib.h>
#include "add.h"

int sum = 1;

int add(int x, int y);

int main(void)
{
    int x, y;
    printf("x y = ");
    scanf("%d %d", &x, &y);    
    printf("sum = %d\n", add(x, y));
    return 0;
}

// clang main.c add.c -o run
// ./run