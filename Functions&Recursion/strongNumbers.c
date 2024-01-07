#include <stdio.h>
void printStrong(int, int);
int isStrong(int);
int factorial(int);
void main()
{
    int lowerlimit, upperlimit;
    printf("input lower limit ");
    scanf("%d", &lowerlimit);
    printf("input upper limit ");
    scanf("%d", &upperlimit);

    printf("the strong numbers between %d and %d are\n", lowerlimit, upperlimit);
    printStrong(lowerlimit, upperlimit);
}
void printStrong(int ll, int ul)
{
    while (ll <= ul)
    {
        if (isStrong(ll))
        {
            printf("%d ", ll);
        }
        ll++;
    }
}
int isStrong(int n)
{
    int sum = 0, temp = n;

    while (temp != 0)
    {

        sum += factorial(temp % 10);
        temp /= 10;
    }

    return sum == n ? 1 : 0;
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}