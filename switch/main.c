#include<stdio.h>
#include<stdlib.h>

int main(void)
{
        float x, y, z;
        char operation;
        printf("x operation y = ");
        scanf("%f %c %f", &x, &operation, &y);
        switch (operation)
        {
            case '+':
                z = x + y;
                printf("%.2f %c %.2f = %.2f\n", x, operation, y, z);
                break;
            case '-':
                z = x - y;
                printf("%.2f %c %.2f = %.2f\n", x, operation, y, z);
                break;
            case '*':
                z = x * y;
                printf("%.2f %c %.2f = %.2f\n", x, operation, y, z);
                break;
            case '/':
                z = x / y;
                printf("%.2f %c %.2f = %.2f\n", x, operation, y, z);
                break;
            default:
                printf("error");
                break;
        }
    return 0;
}
