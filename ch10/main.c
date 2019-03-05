# include<stdio.h>
# include<stdlib.h>

int main(void)
{
    int a = 0;
    int *ptr = &a;
    printf("a = %d, address of a = %p\n", a, &a);
    printf("p = %d, address of a = %p, address of p = %p\n", *ptr, ptr, &ptr);
    return 0;
}