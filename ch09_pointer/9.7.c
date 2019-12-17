#include <stdio.h>

int main()
{
    int i = 0;
    int *iptr, *iptr2, *iptr3;
    printf("i = %d\n", i);
    printf("&i = %p\n", &i);
    printf("*iptr = %d\n", *iptr);
    printf("iptr = %p\n", iptr);
    iptr = &i;
    printf("*iptr = %d\n", *iptr);
    printf("iptr = %p\n", iptr);
    iptr2 = iptr;
    printf("iptr2 = %p\n", iptr2);
    *iptr2 = 2;
    printf("*iptr2 = %d\n", *iptr2);
    printf("i = %d\n", i);
    printf("*iptr = %d\n", *iptr);
    iptr3 = &i;
    printf("*iptr3 = %d\n", *iptr3);
    *iptr3 = 4;
    printf("*iptr = %d\n", *iptr);
}