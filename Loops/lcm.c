#include <stdio.h>

void main()
{
    int n1 = 12, n2 = 30, max, lcm = 1, i;

    max = n1 > n2 ? n1 : n2;
    i = max;
    while (1)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            lcm = i;
            break;
        }

        i += max;
    }

    printf("the lcm of %d and %d is %d", n1, n2, lcm);
}