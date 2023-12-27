#include <stdio.h>
void main()
{
    int n, i;

    printf("enter the upper limit");
    scanf("%d", &n);
    printf("the odd numbers are\n");
    for (i = 1; i <= n; i++)
    {
        if (i&1)
            printf("%d ", i);
    }
}