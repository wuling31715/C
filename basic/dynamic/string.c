# include<stdio.h>
# include<stdlib.h>

int main(void)
{
    char h1 = 'h';
    char h2[] = "h";
    char name[10];
    printf("size of char = %ld\n", sizeof(h1));
    printf("size of string = %ld\n", sizeof(h2));
    printf("what's your name? ");
    gets(name);
    printf("hi! %s", name);
    return 0;
}