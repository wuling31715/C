# include <stdio.h>
# include <stdlib.h>

int main(void)
{
    int i = 0;
    tag:
    printf("i = %d\n", i);
    if(i < 10)
    {
        i++;
        goto tag;
    }        
}