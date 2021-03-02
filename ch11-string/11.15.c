#include <stdio.h>

int get_length(char *string)
{
    int i = 0;
    while (string[i] != '\0')
    {
        i++;
    }
    return i;
}

void reverse(char *string)
{
    int i, length;
    length = get_length(string);
    for (i = length; i >= 0 ; i--)
    {
        printf("%c", string[i]);
    }
    printf("\n");
}

int main()
{
    char array[100];
    scanf("%s", array);
    reverse(array);
}