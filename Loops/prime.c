#include <stdio.h>

void main()
{
    int num, isPrime = 1, i;

    printf("enter the number\n");
    scanf("%d", &num);

    for (i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("prime");
    else
        printf("not prime");
}