#include <stdio.h>
void main()
{
    int num, n, bits;

    printf("enter num \n");
    scanf("%d", &num);
    printf("enter the position to check the bit ");
    scanf("%d",&n);

    if ((num>>n)&1)
        printf("the nth bit is set to 1");
    else
        printf("the nth bit is set to 0");
}