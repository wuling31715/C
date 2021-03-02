#include<stdio.h>
#include<stdlib.h>
#include "add.h"

int add(int x, int y)
{
    extern int sum;
    return sum + x + y;
}