#include <stdio.h>

void write()
{
    FILE * fp;
    char string[] = "\nHello World!";
    fp = fopen("test", "a+");
    for (int i = 0; i < sizeof(string); i++)
    {
        fputc(string[i], fp);
    }    
    fclose(fp);
}

void read()
{
    FILE * fp;
    char c;
    fp = fopen("test", "r+");
    while ((c = fgetc(fp)) != EOF)
    {
        // fputc(c, stdout);
        printf("%c", c);
    }
    fclose(fp);
    printf("\n");
}

int main()
{
    write();
    read();
}