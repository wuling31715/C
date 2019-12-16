#include <stdio.h>

int main()
{
    int start, end, sum, counter;
    scanf("%d", &start);
    scanf("%d", &end);
    counter = sum = start;
    if (start < end)
    {
        while (counter != end)
        {
            counter ++;
            sum += counter;
        }
    }
    else
    {
        while (counter != end)
        {
            counter --;
            sum += counter;
        }
    }
    printf("%d\n", sum);
}