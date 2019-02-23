# include<stdio.h>
# include<stdlib.h>

void upper(char string[])
{    
    int i;
    while(string[i] != '\0'){
        string[i] = string[i] - 32;
        i++;
    }
    printf("%s\n", string);
}

void lower(char string[])
{
    int i;
    while(string[i] != '\0'){
        string[i] = string[i] + 32;
        i++;
    }
    printf("%s\n", string);
}

int main(void)
{
    char string[100];
    gets(string);
    upper(string);
    lower(string);
    return 0;
}