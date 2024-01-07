#include <stdio.h>
int power(int, int);
void main()
{
    int n, exp;
    printf("enter the number ");
    scanf("%d", &n);
    printf("enter the exponent ");
    scanf("%d", &exp);

    printf("%d to the power %d is = %d", n, exp, power(n, exp));
}

int power(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    return base * power(base, exponent - 1);
}