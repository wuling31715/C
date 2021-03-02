#include <stdio.h>

int main()
{
    int i;
    char array[100];
    while (scanf("%s", array) != EOF) 
    {
        printf("%s\n", array);
        for (i = 0; i < 10 && array[i] != '\0'; i++)
        {
            printf("%c", array[i]);
        }
        printf("\n");
    }
}