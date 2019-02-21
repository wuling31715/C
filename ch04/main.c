# include <stdio.h>
# include <stdlib.h>

int main(void)
{
    char name[10];
    int x, y, z;

    printf("what's your name?: ");
    scanf("%s", name);
    printf("my name is %s\n", name);
    
    printf("hi! %s! please input two number: ", name);
    scanf("%d %d", &x, &y);
    z = x + y;
    printf("%d + %d = %d", x, y, z);
    return 0;
}