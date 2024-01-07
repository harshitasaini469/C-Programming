#include <stdio.h>
void printPrimes(int, int);
int isPrime(int);
void main()
{
    int lowerlimit, upperlimit;
    printf("input lower limit ");
    scanf("%d", &lowerlimit);
    printf("input upper limit ");
    scanf("%d", &upperlimit);

    printf("the prime number between %d and %d are\n", lowerlimit, upperlimit);
    printPrimes(lowerlimit, upperlimit);
}
void printPrimes(int ll, int ul)
{
    while (ll <= ul)
    {
        if (isPrime(ll))
        {
            printf("%d ", ll);
        }
        ll++;
    }
}
int isPrime(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}