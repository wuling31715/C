#include<stdio.h>

int main(void){

    long n, q;
    n = 1;
    for (int i = 0; i < 10; i++)
    {
        n *= 10;
    }
    printf("%ld\n", n);
    

    return 0;
}