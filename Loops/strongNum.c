#include <stdio.h>

void main()
{
    int num = 145, fact, sum, temp, r;
    temp = num;
    while (temp)
    {
        r = temp % 10;
        fact = 1;
        for (int i = 1; i <= r; i++)
        {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (num == sum)
        printf("strong");
    else
        printf("not Strong");
}