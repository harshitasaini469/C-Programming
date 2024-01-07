#include <stdio.h>
int sum(int);
void main()
{
    int ul;
    printf("enter the limit ");
    scanf("%d", &ul);

    printf("the sum of natural numbers between 1 and %d is = %d ", ul, sum(ul));
}
int sum(int ul)
{
    if (ul == 0)
        return 0;

    return ul + sum(ul - 1);
}