#include <stdio.h>

int main()
{
    int i = 3;
    int *iptr = &i;
    printf("i = %d\n", i);
    printf("*iptr = %d\n", *iptr); // i, iptr 的值
    printf("&i = %p\n", &i);
    printf("iptr = %p\n", iptr); // i 的位置
    printf("&iptr = %p\n", &iptr); // iptr 的位置
    printf("*(&iptr) = %p\n", *(&iptr));
    printf("&(*iptr) = %p\n", &(*iptr));
}