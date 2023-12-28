#include <stdio.h>
#include <math.h>
int digitCount(int); // forward declaration
void main()
{
    int n = 123, rev = 0, r, temp;

    temp = n;

    while (temp != 0)
    {
        r = temp % 10;
        rev = rev * 10 + r;
        temp /= 10;
    }

    printf("the number is %d and the reverse is %d", n, rev);
}
