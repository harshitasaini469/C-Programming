#include <stdio.h>

void main()
{
    int num = 28, sum = 0, temp;

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (num == sum)
        printf("perfect");
    else
        printf("not perfect");
}