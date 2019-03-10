#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *fptr, *copy;
    fptr = fopen("test.txt", "r");
    copy = fopen("copy.txt", "a");    
    char c;
    int sum;
    while((c = getc(fptr)) != EOF){    
        sum ++;
        printf("%c", c);
        putc(c, copy);
    }
    fclose(fptr);
    printf("\nthere are %d char in test.txt\n", sum);
    return 0;
}
