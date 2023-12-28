#include <stdio.h>

void main()
{
    int n1 = -1, n2 = 1, sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum = n1 + n2;
        printf("%d\t", sum);
        n1 = n2;
        n2 = sum;
    }
}