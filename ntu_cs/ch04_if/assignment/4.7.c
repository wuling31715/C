#include <stdio.h>

int add(end, counter, sum)
{
    if (counter != end)
        {
            counter ++;
            sum += counter;
            end, counter, sum = add(end, counter, sum);
        }
    return end, counter, sum;
}

int main()
{
    int start, end, sum, counter;
    scanf("%d", &start);
    scanf("%d", &end);
    if (end > start)
    {
        counter = sum = start;
        end, counter, sum = add(end, counter, sum);
        sum += end;
    }
    else
    {
        counter = sum = end;
        start, counter, sum = add(start, counter, sum);
        sum += start;
    }
    printf("%d%d%d%d\n", start, end, counter, sum); 
}