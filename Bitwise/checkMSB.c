#include <stdio.h>
void main()
{
    int num, msb, bits;

    printf("enter num \n");
    scanf("%d", &num);
    bits = sizeof(int) * 8; // get no. of bits in the number;
    msb = 1 << (bits - 1);  // move 1 to highest order

    if (num & msb)
        printf("the msb bit is set to 1");
    else
        printf("the msb bit is set to 0");
}