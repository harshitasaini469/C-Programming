
#include <stdio.h>

void main()
{
    int num, count = 0, bits;
    printf("enter the number\n");
    scanf("%d", &num);
    bits = sizeof(int) * 8;
    for (int i = bits - 1; i >= 0; i--)
    {
        if ((num & (1 << i)) == 0)
            count++;
        else
            break;
    }

    printf("the number of trailing zeroes is %d ", count);
}