#include <stdio.h>
void evenOdd(int, int);
void main()
{
    int ll, ul;
    printf("enter the lower limit ");
    scanf("%d", &ll);
    printf("enter the upper limit ");
    scanf("%d", &ul);

    printf("the even/odd numbers between %d and %d are ", ll, ul);
    evenOdd(ll, ul);
}
void evenOdd(int ll, int ul)
{
    if (ll > ul)
        return;

    printf("%d ", ll);

    return evenOdd(ll + 2, ul);
}